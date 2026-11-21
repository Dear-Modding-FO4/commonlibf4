#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkStreamReader;

	class __declspec(novtable) hkParserBuffer :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkParserBuffer };
		inline static constexpr auto VTABLE{ VTABLE::hkParserBuffer };

		// members
		std::int32_t m_bufferStart;  // 0x10
		std::int32_t m_lexemeStart;  // 0x14
		void* m_pos;                 // 0x18
		hkArray<char> m_buffer;      // 0x20
		hkStreamReader* m_reader;    // 0x30
		std::int32_t m_row;          // 0x38
		std::int32_t m_col;          // 0x3C
	};
	static_assert(sizeof(hkParserBuffer) == 0x40);
	static_assert(offsetof(hkParserBuffer, m_bufferStart) == 0x10);
	static_assert(offsetof(hkParserBuffer, m_lexemeStart) == 0x14);
	static_assert(offsetof(hkParserBuffer, m_pos) == 0x18);
	static_assert(offsetof(hkParserBuffer, m_buffer) == 0x20);
	static_assert(offsetof(hkParserBuffer, m_reader) == 0x30);
	static_assert(offsetof(hkParserBuffer, m_row) == 0x38);
	static_assert(offsetof(hkParserBuffer, m_col) == 0x3C);
}
