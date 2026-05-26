#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysColorModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysColorModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysColorModifier };
	};
}
