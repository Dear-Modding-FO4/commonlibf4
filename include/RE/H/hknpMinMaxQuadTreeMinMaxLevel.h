#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hknpMinMaxQuadTreeMinMaxLevel
	{
	public:

		// members
		hkArray<std::uint32_t> m_minMaxData;  // 0x00
		std::uint16_t m_xRes;                 // 0x10
		std::uint16_t m_zRes;                 // 0x12
	};
	static_assert(sizeof(hknpMinMaxQuadTreeMinMaxLevel) == 0x18);
	static_assert(offsetof(hknpMinMaxQuadTreeMinMaxLevel, m_minMaxData) == 0x0);
	static_assert(offsetof(hknpMinMaxQuadTreeMinMaxLevel, m_xRes) == 0x10);
	static_assert(offsetof(hknpMinMaxQuadTreeMinMaxLevel, m_zRes) == 0x12);
}
