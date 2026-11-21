#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkMeshTexture.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class __declspec(novtable) hkMemoryMeshTexture :
		public hkMeshTexture  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMemoryMeshTexture };
		inline static constexpr auto VTABLE{ VTABLE::hkMemoryMeshTexture };

		// members
		hkStringPtr m_filename;              // 0x10
		hkArray<std::uint8_t> m_data;        // 0x18
		std::int8_t m_format;                // 0x28
		bool m_hasMipMaps;                   // 0x29
		std::int8_t m_filterMode;            // 0x2A
		std::int8_t m_usageHint;             // 0x2B
		std::int32_t m_textureCoordChannel;  // 0x2C
	};
	static_assert(sizeof(hkMemoryMeshTexture) == 0x30);
	static_assert(offsetof(hkMemoryMeshTexture, m_filename) == 0x10);
	static_assert(offsetof(hkMemoryMeshTexture, m_data) == 0x18);
	static_assert(offsetof(hkMemoryMeshTexture, m_format) == 0x28);
	static_assert(offsetof(hkMemoryMeshTexture, m_hasMipMaps) == 0x29);
	static_assert(offsetof(hkMemoryMeshTexture, m_filterMode) == 0x2A);
	static_assert(offsetof(hkMemoryMeshTexture, m_usageHint) == 0x2B);
	static_assert(offsetof(hkMemoryMeshTexture, m_textureCoordChannel) == 0x2C);
}
