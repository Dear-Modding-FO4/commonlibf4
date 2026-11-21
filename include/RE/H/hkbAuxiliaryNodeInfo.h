#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class __declspec(novtable) hkbAuxiliaryNodeInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAuxiliaryNodeInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbAuxiliaryNodeInfo };

		// members
		std::uint16_t m_type;                        // 0x10
		std::uint8_t m_depth;                        // 0x12
		std::uint8_t pad13[0x5];                     // 0x13
		hkStringPtr m_referenceBehaviorName;         // 0x18
		hkArray<hkStringPtr> m_selfTransitionNames;  // 0x20
	};
	static_assert(sizeof(hkbAuxiliaryNodeInfo) == 0x30);
	static_assert(offsetof(hkbAuxiliaryNodeInfo, m_type) == 0x10);
	static_assert(offsetof(hkbAuxiliaryNodeInfo, m_depth) == 0x12);
	static_assert(offsetof(hkbAuxiliaryNodeInfo, m_referenceBehaviorName) == 0x18);
	static_assert(offsetof(hkbAuxiliaryNodeInfo, m_selfTransitionNames) == 0x20);
}
