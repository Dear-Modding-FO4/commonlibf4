#pragma once

#include "RE/H/hkSeekableStreamReader.h"

namespace RE
{
	class __declspec(novtable) hkStdioStreamReader :
		public hkSeekableStreamReader  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkStdioStreamReader };
		inline static constexpr auto VTABLE{ VTABLE::hkStdioStreamReader };

		// members
		void* m_handle;  // 0x10
		bool m_isOk;     // 0x18
	};
	static_assert(sizeof(hkStdioStreamReader) == 0x20);
	static_assert(offsetof(hkStdioStreamReader, m_handle) == 0x10);
	static_assert(offsetof(hkStdioStreamReader, m_isOk) == 0x18);
}
