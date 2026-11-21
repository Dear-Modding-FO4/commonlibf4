#pragma once

namespace RE
{
	class hkLocalFrame;

	class hkaSkeletonLocalFrameOnBone
	{
	public:

		// members
		hkLocalFrame* m_localFrame;  // 0x00
		std::int16_t m_boneIndex;    // 0x08
	};
	static_assert(sizeof(hkaSkeletonLocalFrameOnBone) == 0x10);
	static_assert(offsetof(hkaSkeletonLocalFrameOnBone, m_localFrame) == 0x0);
	static_assert(offsetof(hkaSkeletonLocalFrameOnBone, m_boneIndex) == 0x8);
}
