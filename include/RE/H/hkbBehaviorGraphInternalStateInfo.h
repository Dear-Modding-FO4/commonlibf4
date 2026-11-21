#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbAuxiliaryNodeInfo;
	class hkbBehaviorGraphInternalState;

	class __declspec(novtable) hkbBehaviorGraphInternalStateInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBehaviorGraphInternalStateInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbBehaviorGraphInternalStateInfo };

		// members
		std::uint64_t m_characterId;                         // 0x10
		hkbBehaviorGraphInternalState* m_internalState;      // 0x18
		hkArray<hkbAuxiliaryNodeInfo*> m_auxiliaryNodeInfo;  // 0x20
		hkArray<std::int16_t> m_activeEventIds;              // 0x30
		hkArray<std::int16_t> m_activeVariableIds;           // 0x40
	};
	static_assert(sizeof(hkbBehaviorGraphInternalStateInfo) == 0x50);
	static_assert(offsetof(hkbBehaviorGraphInternalStateInfo, m_characterId) == 0x10);
	static_assert(offsetof(hkbBehaviorGraphInternalStateInfo, m_internalState) == 0x18);
	static_assert(offsetof(hkbBehaviorGraphInternalStateInfo, m_auxiliaryNodeInfo) == 0x20);
	static_assert(offsetof(hkbBehaviorGraphInternalStateInfo, m_activeEventIds) == 0x30);
	static_assert(offsetof(hkbBehaviorGraphInternalStateInfo, m_activeVariableIds) == 0x40);
}
