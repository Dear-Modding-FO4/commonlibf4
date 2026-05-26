#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpBallAndSocketConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBallAndSocketConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpBallAndSocketConstraintData };
	};
}
