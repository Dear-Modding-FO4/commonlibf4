#pragma once

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkcdFourAabb
	{
	public:

		enum class BoundIndex : std::uint32_t
		{
			kXMin = 0,
			kXMax = 1,
			kYMin = 2,
			kYMax = 3,
			kZMin = 4,
			kZMax = 5
		};

		// members
		hkVector4f m_lx;  // 0x00
		hkVector4f m_hx;  // 0x10
		hkVector4f m_ly;  // 0x20
		hkVector4f m_hy;  // 0x30
		hkVector4f m_lz;  // 0x40
		hkVector4f m_hz;  // 0x50
	};
	static_assert(sizeof(hkcdFourAabb) == 0x60);
	static_assert(offsetof(hkcdFourAabb, m_lx) == 0x0);
	static_assert(offsetof(hkcdFourAabb, m_hx) == 0x10);
	static_assert(offsetof(hkcdFourAabb, m_ly) == 0x20);
	static_assert(offsetof(hkcdFourAabb, m_hy) == 0x30);
	static_assert(offsetof(hkcdFourAabb, m_lz) == 0x40);
	static_assert(offsetof(hkcdFourAabb, m_hz) == 0x50);
}
