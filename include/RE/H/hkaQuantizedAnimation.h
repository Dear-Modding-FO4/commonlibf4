#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkaAnimation.h"

namespace RE
{
	class __declspec(novtable) hkaQuantizedAnimation :
		public hkaAnimation  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaQuantizedAnimation };
		inline static constexpr auto VTABLE{ VTABLE::hkaQuantizedAnimation };

		// members
		hkArray<std::uint8_t> m_data;  // 0x38
		std::uint32_t m_endian;        // 0x48
		std::uint8_t pad4C[0x4];       // 0x4C
		void* m_skeleton;              // 0x50
	};
	static_assert(sizeof(hkaQuantizedAnimation) == 0x58);
	static_assert(offsetof(hkaQuantizedAnimation, m_data) == 0x38);
	static_assert(offsetof(hkaQuantizedAnimation, m_endian) == 0x48);
	static_assert(offsetof(hkaQuantizedAnimation, m_skeleton) == 0x50);
}
