#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) BSPSysStripUpdateModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysStripUpdateModifier };
		static constexpr auto VTABLE{ VTABLE::BSPSysStripUpdateModifier };
	};
}
