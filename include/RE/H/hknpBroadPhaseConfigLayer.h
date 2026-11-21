#pragma once

namespace RE
{
	class hknpBroadPhaseConfigLayer
	{
	public:

		// members
		std::uint32_t m_collideWithLayerMask;  // 0x00
		bool m_isVolatile;                     // 0x04
	};
	static_assert(sizeof(hknpBroadPhaseConfigLayer) == 0x8);
	static_assert(offsetof(hknpBroadPhaseConfigLayer, m_collideWithLayerMask) == 0x0);
	static_assert(offsetof(hknpBroadPhaseConfigLayer, m_isVolatile) == 0x4);
}
