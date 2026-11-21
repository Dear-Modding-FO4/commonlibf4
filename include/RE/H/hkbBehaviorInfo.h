#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbBehaviorGraphData;
	class hkbBehaviorInfoIdToNamePair;

	class __declspec(novtable) hkbBehaviorInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBehaviorInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbBehaviorInfo };

		// members
		std::uint64_t m_characterId;                           // 0x10
		hkbBehaviorGraphData* m_data;                          // 0x18
		hkArray<hkbBehaviorInfoIdToNamePair> m_idToNamePairs;  // 0x20
	};
	static_assert(sizeof(hkbBehaviorInfo) == 0x30);
	static_assert(offsetof(hkbBehaviorInfo, m_characterId) == 0x10);
	static_assert(offsetof(hkbBehaviorInfo, m_data) == 0x18);
	static_assert(offsetof(hkbBehaviorInfo, m_idToNamePairs) == 0x20);
}
