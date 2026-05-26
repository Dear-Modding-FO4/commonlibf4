#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) BSPSysRecycleBoundModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysRecycleBoundModifier };
		static constexpr auto VTABLE{ VTABLE::BSPSysRecycleBoundModifier };
	};
}
