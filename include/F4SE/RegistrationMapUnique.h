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
		template <class Filter>
		class EventFilterUnique
		{
		public:
			using EventFilter = std::pair<Filter, bool>;
			using EventFilterHandleMap = std::map<EventFilter, std::set<RE::VMHandle>>;

			using PassFilterFunc = std::function<bool(const Filter&, bool)>;

			class RegistrationMapUniqueBase
			{
			public:
				RegistrationMapUniqueBase() = delete;
				RegistrationMapUniqueBase(const std::string_view& a_eventName);
				RegistrationMapUniqueBase(const RegistrationMapUniqueBase& a_rhs);
				RegistrationMapUniqueBase(RegistrationMapUniqueBase&& a_rhs) noexcept;
				~RegistrationMapUniqueBase();

				RegistrationMapUniqueBase& operator=(const RegistrationMapUniqueBase& a_rhs);
				RegistrationMapUniqueBase& operator=(RegistrationMapUniqueBase&& a_rhs) noexcept;

				bool Register(RE::TESForm* a_form, const Filter& a_filter, bool a_matchFilter);
				bool Register(RE::ActiveEffect* a_activeEffect, const Filter& a_filter, bool a_matchFilter);
				bool Register(RE::BGSRefAlias* a_alias, const Filter& a_filter, bool a_matchFilter);
				bool Unregister(RE::TESForm* a_form, const Filter& a_filter, bool a_matchFilter);
				bool Unregister(RE::ActiveEffect* a_activeEffect, const Filter& a_filter, bool a_matchFilter);
				bool Unregister(RE::BGSRefAlias* a_alias, const Filter& a_filter, bool a_matchFilter);
				void UnregisterAll(const RE::TESForm* a_form);
				void UnregisterAll(RE::ActiveEffect* a_activeEffect);
				void UnregisterAll(RE::BGSRefAlias* a_alias);
				void UnregisterAll(RE::VMHandle a_handle);
				void UnregisterAll(RE::TESFormID a_uniqueID);
				void Clear();
				bool Save(SerializationInterface* a_intfc, std::uint32_t a_type, std::uint32_t a_version);
				bool Save(SerializationInterface* a_intfc);
				bool Load(SerializationInterface* a_intfc);
				void Revert(SerializationInterface*);

			protected:
				using Lock = std::recursive_mutex;
				using Locker = std::lock_guard<Lock>;

				bool Register(const void* a_object, RE::TESFormID a_formID, EventFilter a_filter, RE::VMTypeID a_typeID);
				bool Unregister(const void* a_object, RE::TESFormID a_formID, EventFilter a_filter, RE::VMTypeID a_typeID);
				void UnregisterAll(const void* a_object, RE::TESFormID a_formID, RE::VMTypeID a_typeID);

				std::map<RE::TESFormID, EventFilterHandleMap> _regs;
				std::string                                   _eventName;
				mutable Lock                                  _lock;
			};

			template <class, class... Args>
			class RegistrationMapUnique;

			template <class... Args>
				requires(RE::BSScript::detail::valid_parameter<Args>, ...)
			class RegistrationMapUnique<void, Args...> :
				public RegistrationMapUniqueBase
			{
			private:
				using super = RegistrationMapUniqueBase;

			public:
				RegistrationMapUnique() = delete;
				RegistrationMapUnique(const RegistrationMapUnique&) = default;
				RegistrationMapUnique(RegistrationMapUnique&&) = default;

				inline RegistrationMapUnique(const std::string_view& a_eventName) :
					super(a_eventName)
				{}

				~RegistrationMapUnique() = default;

				RegistrationMapUnique& operator=(const RegistrationMapUnique&) = default;
				RegistrationMapUnique& operator=(RegistrationMapUnique&&) = default;

				inline void SendEvent(const RE::TESObjectREFR* a_target, PassFilterFunc a_callback, Args... a_args)
				{
					RE::BSFixedString eventName(this->_eventName);
					if (auto game = RE::GameVM::GetSingleton()) {
						if (auto vm = game->GetVM()) {
							const auto targetFormID = a_target->GetFormID();
							if (auto it = this->_regs.find(targetFormID); it != this->_regs.end()) {
								for (auto& [eventFilter, handles] : it->second) {
									if (a_callback(eventFilter.first, eventFilter.second)) {
										for (auto& handle : handles) {
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
					}
				}

				inline void QueueEvent(RE::TESObjectREFR* a_target, PassFilterFunc a_callback, Args... a_args)
				{
					std::tuple args(VMArg(std::forward<Args>(a_args))...);
					auto       task = GetTaskInterface();
					assert(task);
					if (task) {
						task->AddTask([a_target, a_callback, args, this]() mutable {
							SendEvent_Tuple(a_target, a_callback, std::move(args), index_sequence_for_tuple<decltype(args)>{});
						});
					}
				}

			private:
				template <class Tuple, std::size_t... I>
				inline void SendEvent_Tuple(RE::TESObjectREFR* a_target, PassFilterFunc a_callback, Tuple&& a_tuple, std::index_sequence<I...>)
				{
					SendEvent(a_target, a_callback, std::get<I>(std::forward<Tuple>(a_tuple)).Unpack()...);
				}
			};

			template <>
			class RegistrationMapUnique<void> :
				public RegistrationMapUniqueBase
			{
			private:
				using super = RegistrationMapUniqueBase;

			public:
				RegistrationMapUnique() = delete;
				RegistrationMapUnique(const RegistrationMapUnique&) = default;
				RegistrationMapUnique(RegistrationMapUnique&&) = default;

				inline RegistrationMapUnique(const std::string_view& a_eventName) :
					super(a_eventName)
				{}

				~RegistrationMapUnique() = default;

				RegistrationMapUnique& operator=(const RegistrationMapUnique&) = default;
				RegistrationMapUnique& operator=(RegistrationMapUnique&&) = default;

				inline void SendEvent(const RE::TESObjectREFR* a_target, PassFilterFunc a_callback)
				{
					RE::BSFixedString eventName(this->_eventName);
					if (auto game = RE::GameVM::GetSingleton()) {
						if (auto vm = game->GetVM()) {
							const auto targetFormID = a_target->GetFormID();
							if (auto it = this->_regs.find(targetFormID); it != this->_regs.end()) {
								for (auto& [eventFilter, handles] : it->second) {
									if (a_callback(eventFilter.first, eventFilter.second)) {
										for (auto& handle : handles) {
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
					}
				}

				inline void QueueEvent(RE::TESObjectREFR* a_target, PassFilterFunc a_callback)
				{
					auto task = GetTaskInterface();
					assert(task);
					task->AddTask([a_target, a_callback, this]() {
						SendEvent(a_target, std::move(a_callback));
					});
				}
			};
		};
	}

	template <class Filter, class... Args>
	using RegistrationMapUnique = typename Impl::EventFilterUnique<Filter>::template RegistrationMapUnique<void, Args...>;
}
