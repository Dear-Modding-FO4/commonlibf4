#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) BSPSysInheritVelocityModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::BSPSysInheritVelocityModifier };
		static constexpr auto VTABLE{ VTABLE::BSPSysInheritVelocityModifier };
	};
}
