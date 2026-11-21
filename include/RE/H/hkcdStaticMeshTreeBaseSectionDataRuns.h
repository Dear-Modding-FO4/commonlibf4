#pragma once

namespace RE
{
	class hkcdStaticMeshTreeBaseSectionDataRuns
	{
	public:

		// members
		std::uint32_t m_data;  // 0x00
	};
	static_assert(sizeof(hkcdStaticMeshTreeBaseSectionDataRuns) == 0x4);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSectionDataRuns, m_data) == 0x0);
}
