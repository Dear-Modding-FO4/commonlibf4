#pragma once

#include "RE/B/BSTArray.h"
#include "RE/B/BSTTuple.h"

namespace RE
{
	namespace BGSTypedFormValuePair
	{
		union SharedVal
		{
			std::uint32_t i;
			float         f;
		};
		static_assert(sizeof(SharedVal) == 0x4);

		using Array = BSTArray<BSTTuple<TESForm*, SharedVal>>;

		[[nodiscard]] inline std::uint32_t GetFormValue(const Array* a_array, const TESForm* a_form)
		{
			using func_t = std::uint32_t (*)(const Array*, const TESForm*);
			static REL::Relocation<func_t> func{ ID::BGSTypedFormValuePair::GetFormValue };
			return func(a_array, a_form);
		}

		[[nodiscard]] inline std::int32_t FindIndexForForm(const TESForm* a_form, const Array* a_array)
		{
			using func_t = std::int32_t (*)(const TESForm*, const Array*);
			static REL::Relocation<func_t> func{ ID::BGSTypedFormValuePair::FindIndexForForm };
			return func(a_form, a_array);
		}

		inline void SetFormValue(Array*& a_array, TESForm* a_form, std::uint32_t a_value)
		{
			using func_t = void (*)(Array*&, TESForm*, std::uint32_t);
			static REL::Relocation<func_t> func{ ID::BGSTypedFormValuePair::SetFormValue };
			return func(a_array, a_form, a_value);
		}

		inline void SetFormValueFloat(Array*& a_array, TESForm* a_form, float a_value)
		{
			using func_t = void (*)(Array*&, TESForm*, float);
			static REL::Relocation<func_t> func{ ID::BGSTypedFormValuePair::SetFormValueFloat };
			return func(a_array, a_form, a_value);
		}

		inline void RemoveForm(Array*& a_array, TESForm* a_form)
		{
			using func_t = void (*)(Array*&, TESForm*);
			static REL::Relocation<func_t> func{ ID::BGSTypedFormValuePair::RemoveForm };
			return func(a_array, a_form);
		}

		inline void Clear(Array*& a_array)
		{
			using func_t = void (*)(Array*&);
			static REL::Relocation<func_t> func{ ID::BGSTypedFormValuePair::Clear };
			return func(a_array);
		}
	}
}
