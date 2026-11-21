#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkcdStaticTreeTree_DynamicStorage5.h"

namespace RE
{
	class hkcdStaticMeshTreeBasePrimitive;
	class hkcdStaticMeshTreeBaseSection;

	class hkcdStaticMeshTreeBase :
		public hkcdStaticTreeTree_DynamicStorage5  // 0x00
	{
	public:

		enum class CompressionMode : std::uint32_t
		{
			kCmGlobal = 0,
			kCmLocal4 = 1,
			kCmLocal2 = 2,
			kCmAuto = 3
		};

		// members
		std::int32_t m_numPrimitiveKeys;                        // 0x30
		std::int32_t m_bitsPerKey;                              // 0x34
		std::uint32_t m_maxKeyValue;                            // 0x38
		std::uint8_t pad3C[0x4];                                // 0x3C
		hkArray<hkcdStaticMeshTreeBaseSection> m_sections;      // 0x40
		hkArray<hkcdStaticMeshTreeBasePrimitive> m_primitives;  // 0x50
		hkArray<std::uint16_t> m_sharedVerticesIndex;           // 0x60
	};
	static_assert(sizeof(hkcdStaticMeshTreeBase) == 0x70);
	static_assert(offsetof(hkcdStaticMeshTreeBase, m_numPrimitiveKeys) == 0x30);
	static_assert(offsetof(hkcdStaticMeshTreeBase, m_bitsPerKey) == 0x34);
	static_assert(offsetof(hkcdStaticMeshTreeBase, m_maxKeyValue) == 0x38);
	static_assert(offsetof(hkcdStaticMeshTreeBase, m_sections) == 0x40);
	static_assert(offsetof(hkcdStaticMeshTreeBase, m_primitives) == 0x50);
	static_assert(offsetof(hkcdStaticMeshTreeBase, m_sharedVerticesIndex) == 0x60);
}
