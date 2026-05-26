#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpStiffSpringConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpStiffSpringConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpStiffSpringConstraintData };
	};
}
