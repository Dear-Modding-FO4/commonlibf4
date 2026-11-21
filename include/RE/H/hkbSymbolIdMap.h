#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbSymbolIdMap :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSymbolIdMap };
		inline static constexpr auto VTABLE{ VTABLE::hkbSymbolIdMap };

		// add
		virtual void Unk_04();  // 0x20 [04]
		virtual void Unk_05();  // 0x28 [05]

		// members
		hkArray<std::int32_t> m_internalToExternalMap;  // 0x10
		std::uint8_t m_externalToInternalMap[0x10];     // 0x20
	};
	static_assert(sizeof(hkbSymbolIdMap) == 0x30);
	static_assert(offsetof(hkbSymbolIdMap, m_internalToExternalMap) == 0x10);
	static_assert(offsetof(hkbSymbolIdMap, m_externalToInternalMap) == 0x20);
}
