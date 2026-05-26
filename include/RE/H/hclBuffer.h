#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hclBuffer : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hclBuffer };
		static constexpr auto VTABLE{ VTABLE::hclBuffer };
	};
}
