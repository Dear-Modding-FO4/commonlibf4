#pragma once

#include "RE/H/hkParserBuffer.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkXmlLexAnalyzer :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkXmlLexAnalyzer };
		inline static constexpr auto VTABLE{ VTABLE::hkXmlLexAnalyzer };

		// members
		hkParserBuffer m_buffer;  // 0x10
		std::int32_t m_state;     // 0x50
	};
	static_assert(sizeof(hkXmlLexAnalyzer) == 0x58);
	static_assert(offsetof(hkXmlLexAnalyzer, m_buffer) == 0x10);
	static_assert(offsetof(hkXmlLexAnalyzer, m_state) == 0x50);
}
