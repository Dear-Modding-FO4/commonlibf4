#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysRotationModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysRotationModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysRotationModifier };
	};
}
