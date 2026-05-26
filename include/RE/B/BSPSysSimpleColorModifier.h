#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) BSPSysSimpleColorModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysSimpleColorModifier };
		static constexpr auto VTABLE{ VTABLE::BSPSysSimpleColorModifier };
	};
}
