#include "F4SE/RegistrationSetUnique.h"

namespace F4SE
{
	namespace Impl
	{
		RegistrationSetUniqueBase::RegistrationSetUniqueBase(const std::string_view& a_eventName) :
			_regs(),
			_eventName(a_eventName),
			_lock()
		{}

		RegistrationSetUniqueBase::RegistrationSetUniqueBase(const RegistrationSetUniqueBase& a_rhs) :
			_regs(),
			_eventName(a_rhs._eventName),
			_lock()
		{
			a_rhs._lock.lock();
			_regs = a_rhs._regs;
			a_rhs._lock.unlock();

			if (auto game = RE::GameVM::GetSingleton()) {
				if (auto vm = game->GetVM()) {
					for (auto& uniqueHandle : _regs) {
						for (auto& handle : uniqueHandle.second) {
							vm->GetObjectHandlePolicy().PersistHandle(handle);
						}
					}
				}
			}
		}

		RegistrationSetUniqueBase::RegistrationSetUniqueBase(RegistrationSetUniqueBase&& a_rhs) :
			_regs(),
			_eventName(a_rhs._eventName),
			_lock()
		{
			Locker locker(a_rhs._lock);
			_regs = std::move(a_rhs._regs);
			a_rhs._regs.clear();
		}

		RegistrationSetUniqueBase::~RegistrationSetUniqueBase()
		{
			if (auto game = RE::GameVM::GetSingleton()) {
				if (auto vm = game->GetVM()) {
					for (auto& uniqueHandle : _regs) {
						for (auto& handle : uniqueHandle.second) {
							vm->GetObjectHandlePolicy().ReleaseHandle(handle);
						}
					}
				}
			}
		}

		RegistrationSetUniqueBase& RegistrationSetUniqueBase::operator=(const RegistrationSetUniqueBase& a_rhs)
		{
			if (this == &a_rhs) {
				return *this;
			}

			Locker lhsLocker(_lock);
			Clear();

			{
				Locker rhsLocker(a_rhs._lock);
				_regs = a_rhs._regs;
				_eventName = a_rhs._eventName;
			}

			if (auto game = RE::GameVM::GetSingleton()) {
				if (auto vm = game->GetVM()) {
					for (auto& uniqueHandle : _regs) {
						for (auto& handle : uniqueHandle.second) {
							vm->GetObjectHandlePolicy().PersistHandle(handle);
						}
					}
				}
			}

			return *this;
		}

		RegistrationSetUniqueBase& RegistrationSetUniqueBase::operator=(RegistrationSetUniqueBase&& a_rhs)
		{
			if (this == &a_rhs) {
				return *this;
			}

			Locker lhsLocker(_lock);
			Locker rhsLocker(a_rhs._lock);

			Clear();

			_eventName = a_rhs._eventName;

			_regs = std::move(a_rhs._regs);
			a_rhs._regs.clear();

			return *this;
		}

		bool RegistrationSetUniqueBase::Register(RE::TESForm* a_form)
		{
			assert(a_form);
			const auto reference = a_form->As<RE::TESObjectREFR>();
			const auto formID = reference ? reference->GetFormID() : 0;

			if (formID != 0) {
				return Register(a_form, formID, static_cast<RE::VMTypeID>(a_form->GetFormType()));
			}

			return false;
		}

		bool RegistrationSetUniqueBase::Register(RE::BGSRefAlias* a_alias)
		{
			assert(a_alias);
			const auto target = a_alias->GetActorReference();
			const auto formID = target ? target->GetFormID() : 0;

			if (formID != 0) {
				return Register(a_alias, formID, RE::BGSRefAlias::TYPE_ID);
			}

			return false;
		}

		bool RegistrationSetUniqueBase::Register(RE::ActiveEffect* a_activeEffect)
		{
			assert(a_activeEffect);
			const auto target = a_activeEffect->GetTargetActor();
			const auto formID = target ? target->GetFormID() : 0;

			if (formID != 0) {
				return Register(a_activeEffect, formID, RE::ActiveEffect::TYPE_ID);
			}

			return false;
		}

		bool RegistrationSetUniqueBase::Unregister(RE::TESForm* a_form)
		{
			assert(a_form);
			const auto reference = a_form->As<RE::TESObjectREFR>();
			const auto formID = reference ? reference->GetFormID() : 0;

			if (formID != 0) {
				return Unregister(a_form, formID, static_cast<RE::VMTypeID>(a_form->GetFormType()));
			}

			return false;
		}

		bool RegistrationSetUniqueBase::Unregister(RE::BGSRefAlias* a_alias)
		{
			assert(a_alias);
			const auto target = a_alias->GetActorReference();
			const auto formID = target ? target->GetFormID() : 0;

			if (formID != 0) {
				return Unregister(a_alias, formID, RE::BGSRefAlias::TYPE_ID);
			}

			return false;
		}

		bool RegistrationSetUniqueBase::Unregister(RE::ActiveEffect* a_activeEffect)
		{
			assert(a_activeEffect);
			const auto target = a_activeEffect->GetTargetActor();
			const auto formID = target ? target->GetFormID() : 0;

			if (formID != 0) {
				return Unregister(a_activeEffect, formID, RE::ActiveEffect::TYPE_ID);
			}

			return false;
		}

		void RegistrationSetUniqueBase::Clear()
		{
			Locker locker(_lock);
			if (auto game = RE::GameVM::GetSingleton()) {
				if (auto vm = game->GetVM()) {
					for (auto& uniqueHandle : _regs) {
						for (auto& handle : uniqueHandle.second) {
							vm->GetObjectHandlePolicy().ReleaseHandle(handle);
						}
					}
				}
			}
			_regs.clear();
		}

		bool RegistrationSetUniqueBase::Save(const SerializationInterface* a_intfc, std::uint32_t a_type, std::uint32_t a_version)
		{
			assert(a_intfc);
			if (!a_intfc->OpenRecord(a_type, a_version)) {
				REX::ERROR("Failed to open record"sv);
				return false;
			}

			return Save(a_intfc);
		}

		bool RegistrationSetUniqueBase::Save(const SerializationInterface* a_intfc)
		{
			assert(a_intfc);
			Locker            locker(_lock);
			const std::size_t numUniqueHandles = _regs.size();
			if (!a_intfc->WriteRecordData(numUniqueHandles)) {
				REX::ERROR("Failed to save unique handle count ({})"sv, numUniqueHandles);
				return false;
			}

			for (auto& [formID, handleSet] : _regs) {
				if (!a_intfc->WriteRecordData(formID)) {
					REX::ERROR("Failed to save target formID ({:08X})"sv, formID);
					return false;
				}
				const std::size_t numHandles = handleSet.size();
				if (!a_intfc->WriteRecordData(numHandles)) {
					REX::ERROR("Failed to save handle count ({})"sv, numHandles);
					return false;
				}
				for (auto& handle : handleSet) {
					if (!a_intfc->WriteRecordData(handle)) {
						REX::ERROR("Failed to save reg handle ({})"sv, handle);
						return false;
					}
				}
			}

			return true;
		}

		bool RegistrationSetUniqueBase::Load(const SerializationInterface* a_intfc)
		{
			assert(a_intfc);
			std::size_t numUniqueHandles;
			a_intfc->ReadRecordData(numUniqueHandles);

			Locker locker(_lock);
			_regs.clear();

			RE::TESFormID formID;
			std::size_t   numHandles;
			RE::VMHandle  handle;

			for (std::size_t i = 0; i < numUniqueHandles; ++i) {
				a_intfc->ReadRecordData(formID);
				auto resolvedFormID = a_intfc->ResolveFormID(formID);
				a_intfc->ReadRecordData(numHandles);
				for (std::size_t j = 0; j < numHandles; ++j) {
					a_intfc->ReadRecordData(handle);
					if (auto resolvedHandle = a_intfc->ResolveHandle(handle); resolvedHandle && resolvedFormID) {
						_regs[*resolvedFormID].insert(*resolvedHandle);
					}
				}
			}

			return true;
		}

		void RegistrationSetUniqueBase::Revert(const SerializationInterface*)
		{
			Clear();
		}

		bool RegistrationSetUniqueBase::Register(const void* a_object, RE::TESFormID a_formID, RE::VMTypeID a_typeID)
		{
			assert(a_object);
			auto game = RE::GameVM::GetSingleton();
			auto vm = game ? game->GetVM() : nullptr;
			if (!vm) {
				REX::ERROR("Failed to get VM!"sv);
				return false;
			}

			const auto invalidHandle = vm->GetObjectHandlePolicy().EmptyHandle();
			const auto handle = vm->GetObjectHandlePolicy().GetHandleForObject(a_typeID, a_object);
			if (handle == invalidHandle) {
				REX::ERROR("Failed to create handle!"sv);
				return false;
			}

			_lock.lock();
			auto result = _regs[a_formID].insert(handle);
			_lock.unlock();

			if (result.second) {
				vm->GetObjectHandlePolicy().PersistHandle(handle);
			}

			return result.second;
		}

		bool RegistrationSetUniqueBase::Unregister(const void* a_object, RE::TESFormID a_formID, RE::VMTypeID a_typeID)
		{
			assert(a_object);
			auto game = RE::GameVM::GetSingleton();
			auto vm = game ? game->GetVM() : nullptr;
			if (!vm) {
				REX::ERROR("Failed to get VM!"sv);
				return false;
			}

			auto invalidHandle = vm->GetObjectHandlePolicy().EmptyHandle();
			auto handle = vm->GetObjectHandlePolicy().GetHandleForObject(a_typeID, a_object);
			if (handle == invalidHandle) {
				REX::ERROR("Failed to create handle!"sv);
				return false;
			}

			Locker locker(_lock);
			if (auto it = _regs.find(a_formID); it != _regs.end()) {
				if (auto result = it->second.erase(handle); result != 0) {
					vm->GetObjectHandlePolicy().ReleaseHandle(handle);
					return true;
				}
			}
			return false;
		}

		bool RegistrationSetUniqueBase::Unregister(RE::VMHandle a_handle)
		{
			auto game = RE::GameVM::GetSingleton();
			auto vm = game ? game->GetVM() : nullptr;
			if (!vm) {
				REX::ERROR("Failed to get VM!"sv);
				return false;
			}

			Locker locker(_lock);
			for (auto& uniqueHandle : _regs) {
				if (auto result = uniqueHandle.second.erase(a_handle); result != 0) {
					vm->GetObjectHandlePolicy().ReleaseHandle(a_handle);
					return true;
				}
			}

			return false;
		}

		bool RegistrationSetUniqueBase::Unregister(RE::TESFormID a_uniqueID)
		{
			auto game = RE::GameVM::GetSingleton();
			auto vm = game ? game->GetVM() : nullptr;
			if (!vm) {
				REX::ERROR("Failed to get VM!"sv);
				return false;
			}

			Locker locker(_lock);
			auto   it = _regs.find(a_uniqueID);
			if (it != _regs.end()) {
				for (auto& handle : it->second) {
					vm->GetObjectHandlePolicy().ReleaseHandle(handle);
				}
				_regs.erase(it);
				return true;
			}

			return false;
		}
	}
}
