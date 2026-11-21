#pragma once

namespace RE
{
	class hkbClipGeneratorEcho
	{
	public:

		// members
		float m_offsetLocalTime;  // 0x00
		float m_weight;           // 0x04
		float m_dwdt;             // 0x08
		std::uint8_t unk0C[0x4];  // 0x0C
	};
	static_assert(sizeof(hkbClipGeneratorEcho) == 0x10);
	static_assert(offsetof(hkbClipGeneratorEcho, m_offsetLocalTime) == 0x0);
	static_assert(offsetof(hkbClipGeneratorEcho, m_weight) == 0x4);
	static_assert(offsetof(hkbClipGeneratorEcho, m_dwdt) == 0x8);
}
