#pragma once

#include "RE/H/hkbSceneModifier.h"

namespace RE
{
	class __declspec(novtable) hkbRagdollSceneModifier :
		public hkbSceneModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRagdollSceneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbRagdollSceneModifier };

		// members
		void* unk10;  // 0x10
	};
	static_assert(sizeof(hkbRagdollSceneModifier) == 0x18);
	static_assert(offsetof(hkbRagdollSceneModifier, unk10) == 0x10);
}
