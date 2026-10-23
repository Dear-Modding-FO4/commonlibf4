#include "F4SE/RegistrationSet.h"

namespace F4SE
{
	namespace Impl
	{
		RegistrationSetBase::RegistrationSetBase(const std::string_view& a_eventName) :
			_handles(),
			_eventName(a_eventName),
			_lock()
		{}

		RegistrationSetBase::RegistrationSetBase(const RegistrationSetBase& a_rhs) :
			_handles(),
			_eventName(a_rhs._eventName),
			_lock()
		{
			a_rhs._lock.lock();
			_handles = a_rhs._handles;
			a_rhs._lock.unlock();

			if (auto game = RE::GameVM::GetSingleton()) {
				if (auto vm = game->GetVM()) {
					for (auto& handle : _handles) {
						vm->GetObjectHandlePolicy().PersistHandle(handle);
					}
				}
			}
		}

		RegistrationSetBase::RegistrationSetBase(RegistrationSetBase&& a_rhs) :
			_handles(),
			_eventName(a_rhs._eventName),
			_lock()
		{
			Locker locker(a_rhs._lock);
			_handles = std::move(a_rhs._handles);
			a_rhs._handles.clear();
		}

		RegistrationSetBase::~RegistrationSetBase()
		{
			if (auto game = RE::GameVM::GetSingleton()) {
				if (auto vm = game->GetVM()) {
					for (auto& handle : _handles) {
						vm->GetObjectHandlePolicy().ReleaseHandle(handle);
					}
				}
			}
		}

		RegistrationSetBase& RegistrationSetBase::operator=(const RegistrationSetBase& a_rhs)
		{
			if (this == &a_rhs) {
				return *this;
			}

			Locker lhsLocker(_lock);
			Clear();

			{
				Locker rhsLocker(a_rhs._lock);
				_handles = a_rhs._handles;
				_eventName = a_rhs._eventName;
			}

			if (auto game = RE::GameVM::GetSingleton()) {
				if (auto vm = game->GetVM()) {
					for (auto& handle : _handles) {
						vm->GetObjectHandlePolicy().PersistHandle(handle);
					}
				}
			}

			return *this;
		}

		RegistrationSetBase& RegistrationSetBase::operator=(RegistrationSetBase&& a_rhs)
		{
			if (this == &a_rhs) {
				return *this;
			}

			Locker lhsLocker(_lock);
			Locker rhsLocker(a_rhs._lock);

			Clear();

			_eventName = a_rhs._eventName;

			_handles = std::move(a_rhs._handles);
			a_rhs._handles.clear();

			return *this;
		}

		bool RegistrationSetBase::Register(RE::TESForm* a_form)
		{
			assert(a_form);
			return Register(a_form, static_cast<RE::VMTypeID>(a_form->GetFormType()));
		}

		bool RegistrationSetBase::Register(RE::BGSBaseAlias* a_alias)
		{
			assert(a_alias);
			return Register(a_alias, a_alias->GetVMTypeID());
		}

		bool RegistrationSetBase::Register(RE::ActiveEffect* a_effect)
		{
			assert(a_effect);
			return Register(a_effect, RE::ActiveEffect::TYPE_ID);
		}

		bool RegistrationSetBase::Unregister(RE::TESForm* a_form)
		{
			assert(a_form);
			return Unregister(a_form, static_cast<RE::VMTypeID>(a_form->GetFormType()));
		}

		bool RegistrationSetBase::Unregister(RE::BGSBaseAlias* a_alias)
		{
			assert(a_alias);
			return Unregister(a_alias, a_alias->GetVMTypeID());
		}

		bool RegistrationSetBase::Unregister(RE::ActiveEffect* a_effect)
		{
			assert(a_effect);
			return Unregister(a_effect, RE::ActiveEffect::TYPE_ID);
		}

		void RegistrationSetBase::Clear()
		{
			Locker locker(_lock);
			if (auto game = RE::GameVM::GetSingleton()) {
				if (auto vm = game->GetVM()) {
					for (auto& handle : _handles) {
						vm->GetObjectHandlePolicy().ReleaseHandle(handle);
					}
				}
			}
			_handles.clear();
		}

		bool RegistrationSetBase::Save(const SerializationInterface* a_intfc, std::uint32_t a_type, std::uint32_t a_version)
		{
			assert(a_intfc);
			if (!a_intfc->OpenRecord(a_type, a_version)) {
				REX::ERROR("Failed to open record"sv);
				return false;
			}

			return Save(a_intfc);
		}

		bool RegistrationSetBase::Save(const SerializationInterface* a_intfc)
		{
			assert(a_intfc);
			Locker            locker(_lock);
			const std::size_t numRegs = _handles.size();
			if (!a_intfc->WriteRecordData(numRegs)) {
				REX::ERROR("Failed to save number of regs ({})"sv, numRegs);
				return false;
			}

			for (auto& handle : _handles) {
				if (!a_intfc->WriteRecordData(handle)) {
					REX::ERROR("Failed to save reg ({})"sv, handle);
					return false;
				}
			}

			return true;
		}

		bool RegistrationSetBase::Load(const SerializationInterface* a_intfc)
		{
			assert(a_intfc);
			std::size_t numRegs;
			a_intfc->ReadRecordData(numRegs);

			Locker locker(_lock);
			_handles.clear();

			RE::VMHandle handle;
			for (std::size_t i = 0; i < numRegs; ++i) {
				a_intfc->ReadRecordData(handle);
				if (auto resolvedHandle = a_intfc->ResolveHandle(handle)) {
					_handles.insert(*resolvedHandle);
				}
			}

			return true;
		}

		void RegistrationSetBase::Revert(const SerializationInterface*)
		{
			Clear();
		}

		bool RegistrationSetBase::Register(const void* a_object, RE::VMTypeID a_typeID)
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
			auto result = _handles.insert(handle);
			_lock.unlock();

			if (result.second) {
				vm->GetObjectHandlePolicy().PersistHandle(handle);
			}

			return result.second;
		}

		bool RegistrationSetBase::Unregister(const void* a_object, RE::VMTypeID a_typeID)
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
			auto   it = _handles.find(handle);
			if (it == _handles.end()) {
				return false;
			} else {
				vm->GetObjectHandlePolicy().ReleaseHandle(*it);
				_handles.erase(it);
				return true;
			}
		}

		bool RegistrationSetBase::Unregister(RE::VMHandle a_handle)
		{
			auto game = RE::GameVM::GetSingleton();
			auto vm = game ? game->GetVM() : nullptr;
			if (!vm) {
				REX::ERROR("Failed to get VM!"sv);
				return false;
			}

			Locker locker(_lock);
			auto   it = _handles.find(a_handle);
			if (it == _handles.end()) {
				return false;
			} else {
				vm->GetObjectHandlePolicy().ReleaseHandle(*it);
				_handles.erase(it);
				return true;
			}
		}
	}
}
