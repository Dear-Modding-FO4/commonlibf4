#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbGeneratorOutputListener :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbGeneratorOutputListener };
		inline static constexpr auto VTABLE{ VTABLE::hkbGeneratorOutputListener };
	};
	static_assert(sizeof(hkbGeneratorOutputListener) == 0x10);
}
