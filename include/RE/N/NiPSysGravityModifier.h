#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysGravityModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysGravityModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysGravityModifier };
	};
}
