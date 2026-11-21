#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkcdStaticMeshTreeBase.h"

namespace RE
{
	class hknpCompressedMeshShapeTreeDataRun;

	class hkcdStaticMeshTree_CommonConfigunsignedintunsignedlonglong1121_hknpCompressedMe :
		public hkcdStaticMeshTreeBase  // 0x00
	{
	public:

		// members
		hkArray<std::uint32_t> m_packedVertices;                          // 0x70
		hkArray<std::uint64_t> m_sharedVertices;                          // 0x80
		hkArray<hknpCompressedMeshShapeTreeDataRun> m_primitiveDataRuns;  // 0x90
	};
	static_assert(sizeof(hkcdStaticMeshTree_CommonConfigunsignedintunsignedlonglong1121_hknpCompressedMe) == 0xA0);
	static_assert(offsetof(hkcdStaticMeshTree_CommonConfigunsignedintunsignedlonglong1121_hknpCompressedMe, m_packedVertices) == 0x70);
	static_assert(offsetof(hkcdStaticMeshTree_CommonConfigunsignedintunsignedlonglong1121_hknpCompressedMe, m_sharedVertices) == 0x80);
	static_assert(offsetof(hkcdStaticMeshTree_CommonConfigunsignedintunsignedlonglong1121_hknpCompressedMe, m_primitiveDataRuns) == 0x90);
}
