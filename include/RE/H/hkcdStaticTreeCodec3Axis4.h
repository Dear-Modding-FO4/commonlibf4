#pragma once

#include "RE/H/hkcdStaticTreeCodec3Axis.h"

namespace RE
{
	class hkcdStaticTreeCodec3Axis4 :
		public hkcdStaticTreeCodec3Axis  // 0x00
	{
	public:

		// members
		std::uint8_t m_data;  // 0x03
	};
	static_assert(sizeof(hkcdStaticTreeCodec3Axis4) == 0x4);
	static_assert(offsetof(hkcdStaticTreeCodec3Axis4, m_data) == 0x3);
}
