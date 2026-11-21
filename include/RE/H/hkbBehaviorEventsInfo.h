#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbBehaviorEventsInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBehaviorEventsInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbBehaviorEventsInfo };

		// members
		std::uint64_t m_characterId;               // 0x10
		hkArray<std::int16_t> m_externalEventIds;  // 0x18
		std::int32_t m_padding;                    // 0x28
	};
	static_assert(sizeof(hkbBehaviorEventsInfo) == 0x30);
	static_assert(offsetof(hkbBehaviorEventsInfo, m_characterId) == 0x10);
	static_assert(offsetof(hkbBehaviorEventsInfo, m_externalEventIds) == 0x18);
	static_assert(offsetof(hkbBehaviorEventsInfo, m_padding) == 0x28);
}
