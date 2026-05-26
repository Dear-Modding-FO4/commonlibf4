#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysDragModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysDragModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysDragModifier };
	};
}
