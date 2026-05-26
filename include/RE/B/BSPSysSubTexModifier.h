#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) BSPSysSubTexModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysSubTexModifier };
		static constexpr auto VTABLE{ VTABLE::BSPSysSubTexModifier };
	};
}
