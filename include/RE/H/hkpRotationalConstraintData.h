#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpRotationalConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRotationalConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpRotationalConstraintData };
	};
}
