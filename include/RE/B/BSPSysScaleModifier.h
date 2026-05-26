#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) BSPSysScaleModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysScaleModifier };
		static constexpr auto VTABLE{ VTABLE::BSPSysScaleModifier };
	};
}
