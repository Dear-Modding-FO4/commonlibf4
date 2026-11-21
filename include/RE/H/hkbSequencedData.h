#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbSequencedData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSequencedData };
		inline static constexpr auto VTABLE{ VTABLE::hkbSequencedData };
	};
	static_assert(sizeof(hkbSequencedData) == 0x10);
}
