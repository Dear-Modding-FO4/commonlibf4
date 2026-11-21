#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterController :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterController };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterController };
	};
	static_assert(sizeof(hkbCharacterController) == 0x10);
}
