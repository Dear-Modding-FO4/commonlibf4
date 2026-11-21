#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkLocalFrameCollector :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkLocalFrameCollector };
		inline static constexpr auto VTABLE{ VTABLE::hkLocalFrameCollector };
	};
	static_assert(sizeof(hkLocalFrameCollector) == 0x10);
}
