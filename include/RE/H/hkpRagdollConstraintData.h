#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpRagdollConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpRagdollConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpRagdollConstraintData };
	};
}
