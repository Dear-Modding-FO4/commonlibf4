#pragma once

#include "RE/T/TESForm.h"

namespace RE
{
	class __declspec(novtable) BGSReferenceGroup : public TESForm
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSReferenceGroup };
		static constexpr auto VTABLE{ VTABLE::BGSReferenceGroup };
	};
}
