#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hclOperator : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hclOperator };
		static constexpr auto VTABLE{ VTABLE::hclOperator };
	};
}
