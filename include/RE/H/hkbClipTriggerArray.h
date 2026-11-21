#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbClipTrigger;

	class __declspec(novtable) hkbClipTriggerArray :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbClipTriggerArray };
		inline static constexpr auto VTABLE{ VTABLE::hkbClipTriggerArray };

		// members
		hkArray<hkbClipTrigger> m_triggers;  // 0x10
	};
	static_assert(sizeof(hkbClipTriggerArray) == 0x20);
	static_assert(offsetof(hkbClipTriggerArray, m_triggers) == 0x10);
}
