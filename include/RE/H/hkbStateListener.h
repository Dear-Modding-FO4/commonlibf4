#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbStateListener :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbStateListener };
		inline static constexpr auto VTABLE{ VTABLE::hkbStateListener };

		// add
		virtual void Unk_04();  // 0x20 [04]
		virtual void Unk_05();  // 0x28 [05]
		virtual void Unk_06();  // 0x30 [06]
		virtual void Unk_07();  // 0x38 [07]
	};
	static_assert(sizeof(hkbStateListener) == 0x10);
}
