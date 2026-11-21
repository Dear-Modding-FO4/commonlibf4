#pragma once

namespace RE
{
	class hknpCompressedMeshShapeTreeDataRunData
	{
	public:

		// members
		std::uint16_t m_data;  // 0x00
	};
	static_assert(sizeof(hknpCompressedMeshShapeTreeDataRunData) == 0x2);
	static_assert(offsetof(hknpCompressedMeshShapeTreeDataRunData, m_data) == 0x0);
}
