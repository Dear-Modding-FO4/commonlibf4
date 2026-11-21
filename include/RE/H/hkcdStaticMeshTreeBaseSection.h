#pragma once

#include "RE/H/hkcdStaticMeshTreeBaseSectionDataRuns.h"
#include "RE/H/hkcdStaticMeshTreeBaseSectionPrimitives.h"
#include "RE/H/hkcdStaticMeshTreeBaseSectionSharedVertices.h"
#include "RE/H/hkcdStaticTreeTree_DynamicStorage4.h"
#include "RE/H/hkFlags.h"

namespace RE
{
	class hkcdStaticMeshTreeBaseSection :
		public hkcdStaticTreeTree_DynamicStorage4  // 0x00
	{
	public:

		enum class Flags : std::uint8_t
		{
			kSfRequireTree = 1
		};

		// members
		float m_codecParms[6];                                         // 0x30
		std::uint32_t m_firstPackedVertex;                             // 0x48
		hkcdStaticMeshTreeBaseSectionSharedVertices m_sharedVertices;  // 0x4C
		hkcdStaticMeshTreeBaseSectionPrimitives m_primitives;          // 0x50
		hkcdStaticMeshTreeBaseSectionDataRuns m_dataRuns;              // 0x54
		std::uint8_t m_numPackedVertices;                              // 0x58
		std::uint8_t m_numSharedIndices;                               // 0x59
		std::uint16_t m_leafIndex;                                     // 0x5A
		std::uint8_t m_page;                                           // 0x5C
		hkFlags<Flags, std::uint8_t> m_flags;                                          // 0x5D
		std::uint8_t m_layerData;                                      // 0x5E
		std::uint8_t m_unusedData;                                     // 0x5F
	};
	static_assert(sizeof(hkcdStaticMeshTreeBaseSection) == 0x60);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_codecParms) == 0x30);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_firstPackedVertex) == 0x48);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_sharedVertices) == 0x4C);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_primitives) == 0x50);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_dataRuns) == 0x54);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_numPackedVertices) == 0x58);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_numSharedIndices) == 0x59);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_leafIndex) == 0x5A);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_page) == 0x5C);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_flags) == 0x5D);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_layerData) == 0x5E);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSection, m_unusedData) == 0x5F);
}
