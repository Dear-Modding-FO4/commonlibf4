#pragma once

namespace RE
{
	class hkbEventPayload;

	class hkbEventBase
	{
	public:

		enum class SystemEventIds : std::uint32_t
		{
			kEventIdNull = 0xFFFFFFFF
		};

		// members
		std::int32_t m_id;           // 0x00
		std::uint8_t unk04[0x4];     // 0x04
		hkbEventPayload* m_payload;  // 0x08
	};
	static_assert(sizeof(hkbEventBase) == 0x10);
	static_assert(offsetof(hkbEventBase, m_id) == 0x0);
	static_assert(offsetof(hkbEventBase, m_payload) == 0x8);
}
