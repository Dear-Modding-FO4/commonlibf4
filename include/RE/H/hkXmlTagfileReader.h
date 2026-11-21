#pragma once

#include "RE/H/hkTagfileReader.h"

namespace RE
{
	class __declspec(novtable) hkXmlTagfileReader :
		public hkTagfileReader  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkXmlTagfileReader };
		inline static constexpr auto VTABLE{ VTABLE::hkXmlTagfileReader };
	};
	static_assert(sizeof(hkXmlTagfileReader) == 0x10);
}
