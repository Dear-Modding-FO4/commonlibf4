#pragma once

namespace RE
{
	class hknpLodShapeLevelOfDetailInfo
	{
	public:

		// members
		float m_maxDistance;  // 0x00
		float m_maxShrink;    // 0x04
	};
	static_assert(sizeof(hknpLodShapeLevelOfDetailInfo) == 0x8);
	static_assert(offsetof(hknpLodShapeLevelOfDetailInfo, m_maxDistance) == 0x0);
	static_assert(offsetof(hknpLodShapeLevelOfDetailInfo, m_maxShrink) == 0x4);
}
