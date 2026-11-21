#pragma once

namespace RE
{
	class hkbWorldFromModelModeData
	{
	public:

		enum class WorldFromModelMode : std::uint32_t
		{
			kWorldFromModelModeUseOld = 0,
			kWorldFromModelModeUseInput = 1,
			kWorldFromModelModeCompute = 2,
			kWorldFromModelModeNone = 3,
			kWorldFromModelModeRagdoll = 4
		};

		// members
		std::int16_t m_poseMatchingBone0;  // 0x00
		std::int16_t m_poseMatchingBone1;  // 0x02
		std::int16_t m_poseMatchingBone2;  // 0x04
		std::int8_t m_mode;                // 0x06
	};
	static_assert(sizeof(hkbWorldFromModelModeData) == 0x8);
	static_assert(offsetof(hkbWorldFromModelModeData, m_poseMatchingBone0) == 0x0);
	static_assert(offsetof(hkbWorldFromModelModeData, m_poseMatchingBone1) == 0x2);
	static_assert(offsetof(hkbWorldFromModelModeData, m_poseMatchingBone2) == 0x4);
	static_assert(offsetof(hkbWorldFromModelModeData, m_mode) == 0x6);
}
