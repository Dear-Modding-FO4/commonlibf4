#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterInfo };

		enum class Event : std::uint8_t
		{
			kRemovedFromWorld = 0,
			kShown = 1,
			kHidden = 2,
			kActivated = 3,
			kDeactivated = 4
		};

		// members
		std::uint64_t m_characterId;  // 0x10
		hkEnum<Event, std::uint8_t> m_event;         // 0x18
		std::uint8_t pad19[0x3];      // 0x19
		std::int32_t m_padding;       // 0x1C
	};
	static_assert(sizeof(hkbCharacterInfo) == 0x20);
	static_assert(offsetof(hkbCharacterInfo, m_characterId) == 0x10);
	static_assert(offsetof(hkbCharacterInfo, m_event) == 0x18);
	static_assert(offsetof(hkbCharacterInfo, m_padding) == 0x1C);
}
