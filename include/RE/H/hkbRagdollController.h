#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbRagdollController :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRagdollController };
		inline static constexpr auto VTABLE{ VTABLE::hkbRagdollController };
	};
	static_assert(sizeof(hkbRagdollController) == 0x10);
}
