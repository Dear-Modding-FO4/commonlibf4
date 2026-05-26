#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpHingeConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpHingeConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpHingeConstraintData };
	};
}
