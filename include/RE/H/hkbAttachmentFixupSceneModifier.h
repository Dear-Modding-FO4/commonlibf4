#pragma once

#include "RE/H/hkbSceneModifier.h"

namespace RE
{
	class __declspec(novtable) hkbAttachmentFixupSceneModifier :
		public hkbSceneModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAttachmentFixupSceneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbAttachmentFixupSceneModifier };

		// members
		void* unk10;  // 0x10
	};
	static_assert(sizeof(hkbAttachmentFixupSceneModifier) == 0x18);
	static_assert(offsetof(hkbAttachmentFixupSceneModifier, unk10) == 0x10);
}
