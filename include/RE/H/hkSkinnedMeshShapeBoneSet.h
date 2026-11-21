#pragma once

namespace RE
{
	class hkSkinnedMeshShapeBoneSet
	{
	public:

		// members
		std::uint16_t m_boneBufferOffset;  // 0x00
		std::uint16_t m_numBones;          // 0x02
	};
	static_assert(sizeof(hkSkinnedMeshShapeBoneSet) == 0x4);
	static_assert(offsetof(hkSkinnedMeshShapeBoneSet, m_boneBufferOffset) == 0x0);
	static_assert(offsetof(hkSkinnedMeshShapeBoneSet, m_numBones) == 0x2);
}
