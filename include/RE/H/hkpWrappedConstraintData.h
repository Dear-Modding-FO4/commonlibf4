#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpWrappedConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWrappedConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpWrappedConstraintData };
	};
}
