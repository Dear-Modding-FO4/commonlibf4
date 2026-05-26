#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) BSParentVelocityModifier : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::BSParentVelocityModifier };
		static constexpr auto VTABLE{ VTABLE::BSParentVelocityModifier };
	};
}
