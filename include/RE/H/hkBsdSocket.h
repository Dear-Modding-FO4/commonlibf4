#pragma once

#include "RE/H/hkSocket.h"

namespace RE
{
	class __declspec(novtable) hkBsdSocket :
		public hkSocket  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkBsdSocket };
		inline static constexpr auto VTABLE{ VTABLE::hkBsdSocket };

		// members
		void* unk40;  // 0x40
	};
	static_assert(sizeof(hkBsdSocket) == 0x48);
	static_assert(offsetof(hkBsdSocket, unk40) == 0x40);
}
