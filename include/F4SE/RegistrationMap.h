#pragma once

#include "RE/A/ActiveEffect.h"
#include "RE/B/BGSBaseAlias.h"
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
		class EventFilter
		{
		public:
			class RegistrationMapBase
			{
			public:
				RegistrationMapBase() = delete;
				RegistrationMapBase(const std::string_view& a_eventName);
				RegistrationMapBase(const RegistrationMapBase& a_rhs);
				RegistrationMapBase(RegistrationMapBase&& a_rhs);
				~RegistrationMapBase();

				RegistrationMapBase& operator=(const RegistrationMapBase& a_rhs);
				RegistrationMapBase& operator=(RegistrationMapBase&& a_rhs);

				bool Register(const RE::TESForm* a_form, Filter a_filter);
				bool Register(const RE::BGSBaseAlias* a_alias, Filter a_filter);
				bool Register(const RE::ActiveEffect* a_activeEffect, Filter a_filter);
				bool Unregister(const RE::TESForm* a_form, Filter a_filter);
				bool Unregister(const RE::BGSBaseAlias* a_alias, Filter a_filter);
				bool Unregister(const RE::ActiveEffect* a_activeEffect, Filter a_filter);
				void UnregisterAll(const RE::TESForm* a_form);
				void UnregisterAll(const RE::BGSBaseAlias* a_alias);
				void UnregisterAll(const RE::ActiveEffect* a_activeEffect);
				void UnregisterAll(RE::VMHandle a_handle);
				void Clear();
				bool Save(SerializationInterface* a_intfc, std::uint32_t a_type, std::uint32_t a_version);
				bool Save(SerializationInterface* a_intfc);
				bool Load(SerializationInterface* a_intfc);
				void Revert(SerializationInterface*);

			protected:
				using Lock = std::recursive_mutex;
				using Locker = std::lock_guard<Lock>;

				bool Register(const void* a_object, Filter a_filter, RE::VMTypeID a_typeID);
				bool Unregister(const void* a_object, Filter a_filter, RE::VMTypeID a_typeID);
				void UnregisterAll(const void* a_object, RE::VMTypeID a_typeID);

				bool SaveFilter(SerializationInterface* a_intfc, Filter a_filter);
				bool LoadFilter(SerializationInterface* a_intfc, Filter& a_filter);

				std::map<Filter, std::set<RE::VMHandle>> _regs;
				std::string                              _eventName;
				mutable Lock                             _lock;
			};

			template <class, class... Args>
			class RegistrationMap;

			template <class... Args>
				requires(RE::BSScript::detail::valid_parameter<Args>, ...)
			class RegistrationMap<void, Args...> :
				public RegistrationMapBase
			{
			private:
				using super = RegistrationMapBase;

			public:
				RegistrationMap() = delete;
				RegistrationMap(const RegistrationMap&) = default;
				RegistrationMap(RegistrationMap&&) = default;

				inline RegistrationMap(const std::string_view& a_eventName) :
					super(a_eventName)
				{}

				~RegistrationMap() = default;

				RegistrationMap& operator=(const RegistrationMap&) = default;
				RegistrationMap& operator=(RegistrationMap&&) = default;

				inline void SendEvent(Filter a_filter, Args... a_args)
				{
					RE::BSFixedString eventName(this->_eventName);
					if (auto game = RE::GameVM::GetSingleton()) {
						if (auto vm = game->GetVM()) {
							if (auto it = this->_regs.find(a_filter); it != this->_regs.end()) {
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

				inline void QueueEvent(Filter a_filter, Args... a_args)
				{
					std::tuple args(VMArg(std::forward<Args>(a_args))...);
					auto       task = GetTaskInterface();
					assert(task);
					if (task) {
						task->AddTask([a_filter, args, this]() mutable {
							SendEvent_Tuple(std::move(a_filter), std::move(args), index_sequence_for_tuple<decltype(args)>{});
						});
					}
				}

			private:
				template <class Tuple, std::size_t... I>
				inline void SendEvent_Tuple(Filter a_filter, Tuple&& a_tuple, std::index_sequence<I...>)
				{
					SendEvent(a_filter, std::get<I>(std::forward<Tuple>(a_tuple)).Unpack()...);
				}
			};

			template <>
			class RegistrationMap<void> :
				public RegistrationMapBase
			{
			private:
				using super = RegistrationMapBase;

			public:
				RegistrationMap() = delete;
				RegistrationMap(const RegistrationMap&) = default;
				RegistrationMap(RegistrationMap&&) = default;

				inline RegistrationMap(const std::string_view& a_eventName) :
					super(a_eventName)
				{}

				~RegistrationMap() = default;

				RegistrationMap& operator=(const RegistrationMap&) = default;
				RegistrationMap& operator=(RegistrationMap&&) = default;

				inline void SendEvent(Filter a_filter)
				{
					RE::BSFixedString eventName(this->_eventName);
					if (auto game = RE::GameVM::GetSingleton()) {
						if (auto vm = game->GetVM()) {
							if (auto it = this->_regs.find(a_filter); it != this->_regs.end()) {
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

				inline void QueueEvent(Filter a_filter)
				{
					auto task = GetTaskInterface();
					assert(task);
					task->AddTask([a_filter, this]() {
						SendEvent(std::move(a_filter));
					});
				}
			};
		};
	}

	template <class Filter, class... Args>
	using RegistrationMap = typename Impl::EventFilter<Filter>::template RegistrationMap<void, Args...>;
}
