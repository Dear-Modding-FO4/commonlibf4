#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpPulleyConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPulleyConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpPulleyConstraintData };
	};
}
