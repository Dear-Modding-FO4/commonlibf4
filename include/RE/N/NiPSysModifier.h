#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiPSysModifier : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysModifier };
		static constexpr auto VTABLE{ VTABLE::NiPSysModifier };
	};
}
