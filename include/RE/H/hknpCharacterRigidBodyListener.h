#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpCharacterRigidBodyListener :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCharacterRigidBodyListener };
		inline static constexpr auto VTABLE{ VTABLE::hknpCharacterRigidBodyListener };
	};
	static_assert(sizeof(hknpCharacterRigidBodyListener) == 0x10);
}
