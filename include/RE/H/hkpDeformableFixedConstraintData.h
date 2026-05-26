#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpDeformableFixedConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDeformableFixedConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpDeformableFixedConstraintData };
	};
}
