#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpFixedConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpFixedConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpFixedConstraintData };
	};
}
