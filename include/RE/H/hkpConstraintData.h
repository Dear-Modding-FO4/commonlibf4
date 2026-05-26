#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkpConstraintData : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConstraintData };
		static constexpr auto VTABLE{ VTABLE::hkpConstraintData };
	};
}
