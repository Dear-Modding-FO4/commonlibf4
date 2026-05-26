#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysAgeDeathModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysAgeDeathModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysAgeDeathModifier };
	};
}
