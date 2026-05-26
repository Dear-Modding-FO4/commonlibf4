#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpPointToPathConstraintData : public hkpConstraintData
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPointToPathConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpPointToPathConstraintData };
	};
}
