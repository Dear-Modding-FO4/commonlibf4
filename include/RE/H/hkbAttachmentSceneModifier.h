#pragma once

#include "RE/H/hkbSceneModifier.h"

namespace RE
{
	class __declspec(novtable) hkbAttachmentSceneModifier :
		public hkbSceneModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAttachmentSceneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbAttachmentSceneModifier };

		// members
		void* unk10;  // 0x10
	};
	static_assert(sizeof(hkbAttachmentSceneModifier) == 0x18);
	static_assert(offsetof(hkbAttachmentSceneModifier, unk10) == 0x10);
}
