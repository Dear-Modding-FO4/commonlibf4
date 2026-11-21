#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkbGeneratorSyncInfo.h"

namespace RE
{
	class __declspec(novtable) hkbReferencedGeneratorSyncInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbReferencedGeneratorSyncInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbReferencedGeneratorSyncInfo };

		// members
		hkbGeneratorSyncInfo m_syncInfo;  // 0x10
	};
	static_assert(sizeof(hkbReferencedGeneratorSyncInfo) == 0xB8);
	static_assert(offsetof(hkbReferencedGeneratorSyncInfo, m_syncInfo) == 0x10);
}
