#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hclConstraintSet : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hclConstraintSet };
		static constexpr auto VTABLE{ VTABLE::hclConstraintSet };
	};
}
