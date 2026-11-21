#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class __declspec(novtable) hkLocalFrameGroup :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkLocalFrameGroup };
		inline static constexpr auto VTABLE{ VTABLE::hkLocalFrameGroup };

		// members
		hkStringPtr m_name;  // 0x10
	};
	static_assert(sizeof(hkLocalFrameGroup) == 0x18);
	static_assert(offsetof(hkLocalFrameGroup, m_name) == 0x10);
}
