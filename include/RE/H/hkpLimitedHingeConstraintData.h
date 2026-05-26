#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpLimitedHingeConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpLimitedHingeConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpLimitedHingeConstraintData };
	};
}
