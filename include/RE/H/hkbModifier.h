#pragma once

#include "RE/H/hkbNode.h"

namespace RE
{
	class __declspec(novtable) hkbModifier :
		public hkbNode  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbModifier };

		// add
		virtual void modify();  // 0xB8 [17] (hkbContext&_hkbGeneratorOutput&)
		virtual void predictiveModify();  // 0xC0 [18] (hkbContext&_hkbGeneratorOutput&_float)
		virtual void modifySyncInfo();  // 0xC8 [19] (hkbContext&_hkbGeneratorSyncInfo&)
		virtual void modifyPartitionInfo();  // 0xD0 [1A] (hkbContext&_hkbGeneratorPartitionInfo&)

		// members
		bool m_enable;          // 0x50
		bool m_padModifier[3];  // 0x51
	};
	static_assert(sizeof(hkbModifier) == 0x58);
	static_assert(offsetof(hkbModifier, m_enable) == 0x50);
	static_assert(offsetof(hkbModifier, m_padModifier) == 0x51);
}
