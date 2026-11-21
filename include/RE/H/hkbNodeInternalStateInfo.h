#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkReferencedObject;
	class hkbReferencedGeneratorSyncInfo;

	class __declspec(novtable) hkbNodeInternalStateInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbNodeInternalStateInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbNodeInternalStateInfo };

		// members
		hkbReferencedGeneratorSyncInfo* m_syncInfo;  // 0x10
		hkStringPtr m_name;                          // 0x18
		hkReferencedObject* m_internalState;         // 0x20
		std::uint16_t m_nodeId;                      // 0x28
		bool m_hasActivateBeenCalled;                // 0x2A
		bool m_isModifierEnabled;                    // 0x2B
	};
	static_assert(sizeof(hkbNodeInternalStateInfo) == 0x30);
	static_assert(offsetof(hkbNodeInternalStateInfo, m_syncInfo) == 0x10);
	static_assert(offsetof(hkbNodeInternalStateInfo, m_name) == 0x18);
	static_assert(offsetof(hkbNodeInternalStateInfo, m_internalState) == 0x20);
	static_assert(offsetof(hkbNodeInternalStateInfo, m_nodeId) == 0x28);
	static_assert(offsetof(hkbNodeInternalStateInfo, m_hasActivateBeenCalled) == 0x2A);
	static_assert(offsetof(hkbNodeInternalStateInfo, m_isModifierEnabled) == 0x2B);
}
