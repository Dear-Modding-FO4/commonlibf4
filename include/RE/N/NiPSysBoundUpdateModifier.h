#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysBoundUpdateModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysBoundUpdateModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysBoundUpdateModifier };
	};
}
