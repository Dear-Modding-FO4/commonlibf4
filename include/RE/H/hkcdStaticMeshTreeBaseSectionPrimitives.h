#pragma once

namespace RE
{
	class hkcdStaticMeshTreeBaseSectionPrimitives
	{
	public:

		// members
		std::uint32_t m_data;  // 0x00
	};
	static_assert(sizeof(hkcdStaticMeshTreeBaseSectionPrimitives) == 0x4);
	static_assert(offsetof(hkcdStaticMeshTreeBaseSectionPrimitives, m_data) == 0x0);
}
