#pragma once

#include "RE/H/hkTagfileWriter.h"

namespace RE
{
	class __declspec(novtable) hkXmlTagfileWriter :
		public hkTagfileWriter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkXmlTagfileWriter };
		inline static constexpr auto VTABLE{ VTABLE::hkXmlTagfileWriter };
	};
	static_assert(sizeof(hkXmlTagfileWriter) == 0x10);
}
