#pragma once

namespace RE
{
	class hkMeshShape;

	class hkSkinnedMeshShapeBoneSection
	{
	public:

		// members
		hkMeshShape* m_meshBuffer;       // 0x00
		std::uint16_t m_startBoneSetId;  // 0x08
		std::int16_t m_numBoneSets;      // 0x0A
	};
	static_assert(sizeof(hkSkinnedMeshShapeBoneSection) == 0x10);
	static_assert(offsetof(hkSkinnedMeshShapeBoneSection, m_meshBuffer) == 0x0);
	static_assert(offsetof(hkSkinnedMeshShapeBoneSection, m_startBoneSetId) == 0x8);
	static_assert(offsetof(hkSkinnedMeshShapeBoneSection, m_numBoneSets) == 0xA);
}
