#pragma once

#include "RE/H/hkcdStaticTreeCodec3Axis.h"

namespace RE
{
	class hkcdStaticTreeCodec3Axis5 :
		public hkcdStaticTreeCodec3Axis  // 0x00
	{
	public:

		// members
		std::uint8_t m_hiData;  // 0x03
		std::uint8_t m_loData;  // 0x04
	};
	static_assert(sizeof(hkcdStaticTreeCodec3Axis5) == 0x5);
	static_assert(offsetof(hkcdStaticTreeCodec3Axis5, m_hiData) == 0x3);
	static_assert(offsetof(hkcdStaticTreeCodec3Axis5, m_loData) == 0x4);
}
