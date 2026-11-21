#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbAssetLoader :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAssetLoader };
		inline static constexpr auto VTABLE{ VTABLE::hkbAssetLoader };
	};
	static_assert(sizeof(hkbAssetLoader) == 0x10);
}
