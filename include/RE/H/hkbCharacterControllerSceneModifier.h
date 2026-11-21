#pragma once

#include "RE/H/hkbSceneModifier.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterControllerSceneModifier :
		public hkbSceneModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterControllerSceneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterControllerSceneModifier };

		// members
		void* unk10;         // 0x10
		std::uint8_t unk18;  // 0x18
	};
	static_assert(sizeof(hkbCharacterControllerSceneModifier) == 0x20);
	static_assert(offsetof(hkbCharacterControllerSceneModifier, unk10) == 0x10);
	static_assert(offsetof(hkbCharacterControllerSceneModifier, unk18) == 0x18);
}
