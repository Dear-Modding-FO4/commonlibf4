#pragma once

#include "RE/H/hkDataWorld.h"

namespace RE
{
	class __declspec(novtable) hkDataWorldDict :
		public hkDataWorld  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataWorldDict };
		inline static constexpr auto VTABLE{ VTABLE::hkDataWorldDict };

		// members
		void* m_tracker;                // 0x10
		void* unk18;  // 0x18
		std::uint8_t unk20[0x100];  // 0x20
	};
	static_assert(sizeof(hkDataWorldDict) == 0x120);
	static_assert(offsetof(hkDataWorldDict, m_tracker) == 0x10);
	static_assert(offsetof(hkDataWorldDict, unk18) == 0x18);
	static_assert(offsetof(hkDataWorldDict, unk20) == 0x20);
}
