#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysFieldModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysFieldModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysFieldModifier };
	};
}
