#pragma once

namespace RE
{
	class hkcdStaticMeshTreeBasePrimitive
	{
	public:

		enum class Type : std::uint32_t
		{
			kInvalid = 0,
			kTriangle = 1,
			kQuad = 2,
			kCustom = 3,
			kNumTypes = 4
		};

		// members
		std::uint8_t m_indices[4];  // 0x00
	};
	static_assert(sizeof(hkcdStaticMeshTreeBasePrimitive) == 0x4);
	static_assert(offsetof(hkcdStaticMeshTreeBasePrimitive, m_indices) == 0x0);
}
