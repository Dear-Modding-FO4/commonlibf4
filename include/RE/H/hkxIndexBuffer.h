#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkxIndexBuffer :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxIndexBuffer };
		inline static constexpr auto VTABLE{ VTABLE::hkxIndexBuffer };

		enum class IndexType : std::int8_t
		{
			kIndexTypeInvalid = 0,
			kIndexTypeTriList = 1,
			kIndexTypeTriStrip = 2,
			kIndexTypeTriFan = 3,
			kIndexTypeMaxId = 4
		};

		// members
		hkEnum<IndexType, std::int8_t> m_indexType;  // 0x10
		std::uint8_t pad11[0x7];                     // 0x11
		hkArray<std::uint16_t> m_indices16;          // 0x18
		hkArray<std::uint32_t> m_indices32;          // 0x28
		std::uint32_t m_vertexBaseOffset;            // 0x38
		std::uint32_t m_length;                      // 0x3C
	};
	static_assert(sizeof(hkxIndexBuffer) == 0x40);
	static_assert(offsetof(hkxIndexBuffer, m_indexType) == 0x10);
	static_assert(offsetof(hkxIndexBuffer, m_indices16) == 0x18);
	static_assert(offsetof(hkxIndexBuffer, m_indices32) == 0x28);
	static_assert(offsetof(hkxIndexBuffer, m_vertexBaseOffset) == 0x38);
	static_assert(offsetof(hkxIndexBuffer, m_length) == 0x3C);
}
