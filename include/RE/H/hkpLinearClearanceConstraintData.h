#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpLinearClearanceConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpLinearClearanceConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpLinearClearanceConstraintData };
	};
}
