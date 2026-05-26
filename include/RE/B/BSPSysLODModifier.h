#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) BSPSysLODModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysLODModifier };
		static constexpr auto VTABLE{ VTABLE::BSPSysLODModifier };
	};
}
