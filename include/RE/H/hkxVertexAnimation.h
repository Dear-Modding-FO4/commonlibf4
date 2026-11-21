#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkxVertexBuffer.h"

namespace RE
{
	class hkxVertexAnimationUsageMap;

	class __declspec(novtable) hkxVertexAnimation :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxVertexAnimation };
		inline static constexpr auto VTABLE{ VTABLE::hkxVertexAnimation };

		// members
		float m_time;                                        // 0x10
		std::uint8_t pad14[0x4];                             // 0x14
		hkxVertexBuffer m_vertData;                          // 0x18
		hkArray<std::int32_t> m_vertexIndexMap;              // 0xA0
		hkArray<hkxVertexAnimationUsageMap> m_componentMap;  // 0xB0
	};
	static_assert(sizeof(hkxVertexAnimation) == 0xC0);
	static_assert(offsetof(hkxVertexAnimation, m_time) == 0x10);
	static_assert(offsetof(hkxVertexAnimation, m_vertData) == 0x18);
	static_assert(offsetof(hkxVertexAnimation, m_vertexIndexMap) == 0xA0);
	static_assert(offsetof(hkxVertexAnimation, m_componentMap) == 0xB0);
}
