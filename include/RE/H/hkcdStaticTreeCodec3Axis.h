#pragma once

namespace RE
{
	class hkcdStaticTreeCodec3Axis
	{
	public:

		// members
		std::uint8_t m_xyz[3];  // 0x00
	};
	static_assert(sizeof(hkcdStaticTreeCodec3Axis) == 0x3);
	static_assert(offsetof(hkcdStaticTreeCodec3Axis, m_xyz) == 0x0);
}
