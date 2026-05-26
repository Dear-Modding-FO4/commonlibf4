#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysPositionModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysPositionModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysPositionModifier };
	};
}
