#pragma once

namespace RE
{
	class hkcdStaticMeshTreeBaseSectionSharedVertices
	{
	public:

		// members
		std::uint32_t m_data;  // 0x00
	};
	static_assert(sizeof(hkcdStaticMeshTreeBaseSectionSharedVertices) == 0x4);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSectionSharedVertices, m_data) == 0x0);
}
