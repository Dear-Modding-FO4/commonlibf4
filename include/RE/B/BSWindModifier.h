#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) BSWindModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWindModifier };
		static constexpr auto VTABLE{ VTABLE::BSWindModifier };
	};
}
