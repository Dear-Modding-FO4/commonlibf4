#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysBombModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysBombModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysBombModifier };
	};
}
