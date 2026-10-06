#pragma once

#include "RE/T/TESForm.h"

namespace RE
{
	class __declspec(novtable) BGSReferenceGroup :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSReferenceGroup };
		static constexpr auto VTABLE{ VTABLE::BGSReferenceGroup };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kRFGP };
	};
	static_assert(sizeof(BGSReferenceGroup) == 0x20);
}
