#pragma once

#include "RE/A/ActiveEffect.h"
#include "RE/A/Actor.h"
#include "RE/B/BGSRefAlias.h"
#include "RE/B/BSFixedString.h"
#include "RE/B/BSScriptUtil.h"
#include "RE/T/TESForm.h"

#include "F4SE/API.h"
#include "F4SE/Impl/RegistrationTraits.h"
#include "F4SE/Interfaces.h"

namespace F4SE
{
	namespace Impl
	{
		class RegistrationSetUniqueBase
		{
		public:
			RegistrationSetUniqueBase() = delete;
			RegistrationSetUniqueBase(const std::string_view& a_eventName);
			RegistrationSetUniqueBase(const RegistrationSetUniqueBase& a_rhs);
			RegistrationSetUniqueBase(RegistrationSetUniqueBase&& a_rhs);
			~RegistrationSetUniqueBase();

			RegistrationSetUniqueBase& operator=(const RegistrationSetUniqueBase& a_rhs);
			RegistrationSetUniqueBase& operator=(RegistrationSetUniqueBase&& a_rhs);

			bool Register(RE::TESForm* a_form);
			bool Register(RE::BGSRefAlias* a_alias);
			bool Register(RE::ActiveEffect* a_activeEffect);
			bool Unregister(RE::TESForm* a_form);
			bool Unregister(RE::BGSRefAlias* a_alias);
			bool Unregister(RE::ActiveEffect* a_activeEffect);
			bool Unregister(RE::VMHandle a_handle);
			bool Unregister(RE::TESFormID a_uniqueID);
			void Clear();
			bool Save(const SerializationInterface* a_intfc, std::uint32_t a_type, std::uint32_t a_version);
			bool Save(const SerializationInterface* a_intfc);
			bool Load(const SerializationInterface* a_intfc);
			void Revert(const SerializationInterface*);

		protected:
			using Lock = std::recursive_mutex;
			using Locker = std::lock_guard<Lock>;

			bool Register(const void* a_object, RE::TESFormID a_formID, RE::VMTypeID a_typeID);
			bool Unregister(const void* a_object, RE::TESFormID a_formID, RE::VMTypeID a_typeID);

			std::map<RE::TESFormID, std::set<RE::VMHandle>> _regs;
			std::string                                     _eventName;
			mutable Lock                                    _lock;
		};

		template <class, class... Args>
		class RegistrationSetUnique;

		template <class... Args>
			requires(RE::BSScript::detail::valid_parameter<Args>, ...)
		class RegistrationSetUnique<void, Args...> :
			public RegistrationSetUniqueBase
		{
		private:
			using super = RegistrationSetUniqueBase;

		public:
			RegistrationSetUnique() = delete;
			RegistrationSetUnique(const RegistrationSetUnique&) = default;
			RegistrationSetUnique(RegistrationSetUnique&&) = default;

			inline RegistrationSetUnique(const std::string_view& a_eventName) :
				super(a_eventName)
			{
			}

			~RegistrationSetUnique() = default;

			RegistrationSetUnique& operator=(const RegistrationSetUnique&) = default;
			RegistrationSetUnique& operator=(RegistrationSetUnique&&) = default;

			inline void SendEvent(RE::TESObjectREFR* a_target, Args... a_args)
			{
				RE::BSFixedString eventName(this->_eventName);
				if (auto game = RE::GameVM::GetSingleton()) {
					if (auto vm = game->GetVM()) {
						const auto targetID = a_target->GetFormID();
						if (const auto it = this->_regs.find(targetID); it != this->_regs.end()) {
							for (auto& handle : it->second) {
								vm->SendEvent(
									handle,
									eventName,
									[&](RE::BSScrapArray<RE::BSScript::Variable>& a_out) {
										a_out = RE::BSScript::detail::PackVariables(a_args...);
										return true;
									},
									nullptr,
									nullptr);
							}
						}
					}
				}
			}

			inline void QueueEvent(RE::TESObjectREFR* a_target, Args... a_args)
			{
				std::tuple args(VMArg(std::forward<Args>(a_args))...);
				auto       task = GetTaskInterface();
				assert(task);
				if (task) {
					task->AddTask([a_target, args, this]() mutable {
						SendEvent_Tuple(a_target, std::move(args), index_sequence_for_tuple<decltype(args)>{});
					});
				}
			}

		private:
			template <class Tuple, std::size_t... I>
			inline void SendEvent_Tuple(RE::TESObjectREFR* a_target, Tuple&& a_tuple, std::index_sequence<I...>)
			{
				SendEvent(a_target, std::get<I>(std::forward<Tuple>(a_tuple)).Unpack()...);
			}
		};

		template <>
		class RegistrationSetUnique<void> :
			public RegistrationSetUniqueBase
		{
		private:
			using super = RegistrationSetUniqueBase;

		public:
			RegistrationSetUnique() = delete;
			RegistrationSetUnique(const RegistrationSetUnique&) = default;
			RegistrationSetUnique(RegistrationSetUnique&&) = default;

			inline RegistrationSetUnique(const std::string_view& a_eventName) :
				super(a_eventName)
			{
			}

			~RegistrationSetUnique() = default;

			RegistrationSetUnique& operator=(const RegistrationSetUnique&) = default;
			RegistrationSetUnique& operator=(RegistrationSetUnique&&) = default;

			inline void SendEvent(RE::TESObjectREFR* a_target)
			{
				RE::BSFixedString eventName(this->_eventName);
				if (auto game = RE::GameVM::GetSingleton()) {
					if (auto vm = game->GetVM()) {
						const auto targetID = a_target->GetFormID();
						if (const auto it = this->_regs.find(targetID); it != this->_regs.end()) {
							for (auto& handle : it->second) {
								vm->SendEvent(
									handle,
									eventName,
									RE::BSScript::ZeroFunctionArguments,
									nullptr,
									nullptr);
							}
						}
					}
				}
			}

			inline void QueueEvent(RE::TESObjectREFR* a_target)
			{
				auto task = GetTaskInterface();
				assert(task);
				task->AddTask([a_target, this]() {
					SendEvent(a_target);
				});
			}
		};
	}

	template <class... Args>
	using RegistrationSetUnique = Impl::RegistrationSetUnique<void, Args...>;
}
