#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpWheelFrictionConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWheelFrictionConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpWheelFrictionConstraintData };
	};
}
