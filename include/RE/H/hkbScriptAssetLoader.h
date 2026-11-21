#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbScriptAssetLoader :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbScriptAssetLoader };
		inline static constexpr auto VTABLE{ VTABLE::hkbScriptAssetLoader };

		// add
		virtual void loadScript();  // 0x20 [04] (char__bool)
		virtual void clearEntries();  // 0x28 [05] (void)

		// members
		std::uint8_t unk10[0x20];  // 0x10
	};
	static_assert(sizeof(hkbScriptAssetLoader) == 0x30);
}
