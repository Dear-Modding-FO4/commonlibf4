#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysGrowFadeModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysGrowFadeModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysGrowFadeModifier };
	};
}
