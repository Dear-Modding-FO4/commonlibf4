#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpPointToPlaneConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPointToPlaneConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpPointToPlaneConstraintData };
	};
}
