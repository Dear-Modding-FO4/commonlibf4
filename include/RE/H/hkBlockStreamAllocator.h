#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkBlockStreamAllocator : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkBlockStreamAllocator };
		static constexpr auto VTABLE{ VTABLE::hkBlockStreamAllocator };
	};
}
