#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class __declspec(novtable) hkbEventRaisedInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEventRaisedInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbEventRaisedInfo };

		// members
		std::uint64_t m_characterId;  // 0x10
		hkStringPtr m_eventName;      // 0x18
		bool m_raisedBySdk;           // 0x20
		std::uint8_t pad21[0x3];      // 0x21
		std::int32_t m_senderId;      // 0x24
		std::int32_t m_padding;       // 0x28
	};
	static_assert(sizeof(hkbEventRaisedInfo) == 0x30);
	static_assert(offsetof(hkbEventRaisedInfo, m_characterId) == 0x10);
	static_assert(offsetof(hkbEventRaisedInfo, m_eventName) == 0x18);
	static_assert(offsetof(hkbEventRaisedInfo, m_raisedBySdk) == 0x20);
	static_assert(offsetof(hkbEventRaisedInfo, m_senderId) == 0x24);
	static_assert(offsetof(hkbEventRaisedInfo, m_padding) == 0x28);
}
