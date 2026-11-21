#pragma once

namespace RE
{
	class hkbGeneratorSyncInfoSyncPoint
	{
	public:

		// members
		std::int32_t m_id;  // 0x00
		float m_time;       // 0x04
	};
	static_assert(sizeof(hkbGeneratorSyncInfoSyncPoint) == 0x8);
	static_assert(offsetof(hkbGeneratorSyncInfoSyncPoint, m_id) == 0x0);
	static_assert(offsetof(hkbGeneratorSyncInfoSyncPoint, m_time) == 0x4);
}
