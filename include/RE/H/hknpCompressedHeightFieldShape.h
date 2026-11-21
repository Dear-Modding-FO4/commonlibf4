#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpHeightFieldShape.h"

namespace RE
{
	class __declspec(novtable) hknpCompressedHeightFieldShape :
		public hknpHeightFieldShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCompressedHeightFieldShape };
		inline static constexpr auto VTABLE{ VTABLE::hknpCompressedHeightFieldShape };

		// members
		hkArray<std::uint16_t> m_storage;    // 0xF0
		hkArray<std::uint16_t> m_shapeTags;  // 0x100
		bool m_triangleFlip;                 // 0x110
		std::uint8_t pad111[0x3];            // 0x111
		float m_offset;                      // 0x114
		float m_scale;                       // 0x118
	};
	static_assert(sizeof(hknpCompressedHeightFieldShape) == 0x120);
	static_assert(offsetof(hknpCompressedHeightFieldShape, m_storage) == 0xF0);
	static_assert(offsetof(hknpCompressedHeightFieldShape, m_shapeTags) == 0x100);
	static_assert(offsetof(hknpCompressedHeightFieldShape, m_triangleFlip) == 0x110);
	static_assert(offsetof(hknpCompressedHeightFieldShape, m_offset) == 0x114);
	static_assert(offsetof(hknpCompressedHeightFieldShape, m_scale) == 0x118);
}
