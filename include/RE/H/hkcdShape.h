#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkcdShape :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdShape };
		inline static constexpr auto VTABLE{ VTABLE::hkcdShape };

		// members
		std::uint8_t m_type;                // 0x10
		std::uint8_t m_dispatchType;        // 0x11
		std::uint8_t m_bitsPerKey;          // 0x12
		std::uint8_t m_shapeInfoCodecType;  // 0x13
	};
	static_assert(sizeof(hkcdShape) == 0x18);
	static_assert(offsetof(hkcdShape, m_type) == 0x10);
	static_assert(offsetof(hkcdShape, m_dispatchType) == 0x11);
	static_assert(offsetof(hkcdShape, m_bitsPerKey) == 0x12);
	static_assert(offsetof(hkcdShape, m_shapeInfoCodecType) == 0x13);
}
