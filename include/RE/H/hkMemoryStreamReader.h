#pragma once

#include "RE/H/hkSeekableStreamReader.h"

namespace RE
{
	class __declspec(novtable) hkMemoryStreamReader :
		public hkSeekableStreamReader  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMemoryStreamReader };
		inline static constexpr auto VTABLE{ VTABLE::hkMemoryStreamReader };

		// members
		void* m_buf;              // 0x10
		std::uint32_t m_bufCurrent;      // 0x18
		std::uint32_t m_bufSize;      // 0x1C
		std::int32_t m_markPos;  // 0x20
		std::uint8_t m_memType;       // 0x24
	};
	static_assert(sizeof(hkMemoryStreamReader) == 0x28);
	static_assert(offsetof(hkMemoryStreamReader, m_buf) == 0x10);
	static_assert(offsetof(hkMemoryStreamReader, m_bufCurrent) == 0x18);
	static_assert(offsetof(hkMemoryStreamReader, m_bufSize) == 0x1C);
	static_assert(offsetof(hkMemoryStreamReader, m_memType) == 0x24);
}
