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
		class RegistrationSetBase
		{
		public:
			RegistrationSetBase() = delete;
			RegistrationSetBase(const std::string_view& a_eventName);
			RegistrationSetBase(const RegistrationSetBase& a_rhs);
			RegistrationSetBase(RegistrationSetBase&& a_rhs);
			~RegistrationSetBase();

			RegistrationSetBase& operator=(const RegistrationSetBase& a_rhs);
			RegistrationSetBase& operator=(RegistrationSetBase&& a_rhs);

			bool Register(RE::TESForm* a_form);
			bool Register(RE::BGSBaseAlias* a_alias);
			bool Register(RE::ActiveEffect* a_effect);
			bool Unregister(RE::TESForm* a_form);
			bool Unregister(RE::BGSBaseAlias* a_alias);
			bool Unregister(RE::ActiveEffect* a_effect);
			bool Unregister(RE::VMHandle a_handle);
			void Clear();
			bool Save(const SerializationInterface* a_intfc, std::uint32_t a_type, std::uint32_t a_version);
			bool Save(const SerializationInterface* a_intfc);
			bool Load(const SerializationInterface* a_intfc);
			void Revert(const SerializationInterface*);

		protected:
			using Lock = std::recursive_mutex;
			using Locker = std::lock_guard<Lock>;

			bool Register(const void* a_object, RE::VMTypeID a_typeID);
			bool Unregister(const void* a_object, RE::VMTypeID a_typeID);

			std::set<RE::VMHandle> _handles;
			std::string            _eventName;
			mutable Lock           _lock;
		};

		template <class, class... Args>
		class RegistrationSet;

		template <class... Args>
			requires(RE::BSScript::detail::valid_parameter<Args>, ...)
		class RegistrationSet<void, Args...> :
			public RegistrationSetBase
		{
		private:
			using super = RegistrationSetBase;

		public:
			RegistrationSet() = delete;
			RegistrationSet(const RegistrationSet&) = default;
			RegistrationSet(RegistrationSet&&) = default;

			inline RegistrationSet(const std::string_view& a_eventName) :
				super(a_eventName)
			{}

			~RegistrationSet() = default;

			RegistrationSet& operator=(const RegistrationSet&) = default;
			RegistrationSet& operator=(RegistrationSet&&) = default;

			inline void SendEvent(Args... a_args)
			{
				RE::BSFixedString eventName(this->_eventName);
				if (auto game = RE::GameVM::GetSingleton()) {
					if (auto vm = game->GetVM()) {
						for (auto& handle : this->_handles) {
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

			inline void QueueEvent(Args... a_args)
			{
				std::tuple args(VMArg(std::forward<Args>(a_args))...);
				auto       task = GetTaskInterface();
				assert(task);
				if (task) {
					task->AddTask([args, this]() mutable {
						SendEvent_Tuple(std::move(args), index_sequence_for_tuple<decltype(args)>{});
					});
				}
			}

		private:
			template <class Tuple, std::size_t... I>
			inline void SendEvent_Tuple(Tuple&& a_tuple, std::index_sequence<I...>)
			{
				SendEvent(std::get<I>(std::forward<Tuple>(a_tuple)).Unpack()...);
			}
		};

		template <>
		class RegistrationSet<void> :
			public RegistrationSetBase
		{
		private:
			using super = RegistrationSetBase;

		public:
			RegistrationSet() = delete;
			RegistrationSet(const RegistrationSet&) = default;
			RegistrationSet(RegistrationSet&&) = default;

			inline RegistrationSet(const std::string_view& a_eventName) :
				super(a_eventName)
			{}

			~RegistrationSet() = default;

			RegistrationSet& operator=(const RegistrationSet&) = default;
			RegistrationSet& operator=(RegistrationSet&&) = default;

			inline void SendEvent()
			{
				RE::BSFixedString eventName(this->_eventName);
				if (auto game = RE::GameVM::GetSingleton()) {
					if (auto vm = game->GetVM()) {
						for (auto& handle : this->_handles) {
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

			inline void QueueEvent()
			{
				auto task = GetTaskInterface();
				assert(task);
				task->AddTask([this]() {
					SendEvent();
				});
			}
		};
	}

	template <class... Args>
	using RegistrationSet = Impl::RegistrationSet<void, Args...>;
}
