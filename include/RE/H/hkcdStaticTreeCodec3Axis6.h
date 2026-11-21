#pragma once

#include "RE/H/hkcdStaticTreeCodec3Axis.h"

namespace RE
{
	class hkcdStaticTreeCodec3Axis6 :
		public hkcdStaticTreeCodec3Axis  // 0x00
	{
	public:

		// members
		std::uint8_t m_hiData;   // 0x03
		std::uint16_t m_loData;  // 0x04
	};
	static_assert(sizeof(hkcdStaticTreeCodec3Axis6) == 0x6);
	static_assert(offsetof(hkcdStaticTreeCodec3Axis6, m_hiData) == 0x3);
	static_assert(offsetof(hkcdStaticTreeCodec3Axis6, m_loData) == 0x4);
}
