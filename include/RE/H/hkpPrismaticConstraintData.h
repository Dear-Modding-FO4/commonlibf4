#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpPrismaticConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPrismaticConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpPrismaticConstraintData };
	};
}
