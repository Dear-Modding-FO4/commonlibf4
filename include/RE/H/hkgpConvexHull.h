#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkgpConvexHull :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkgpConvexHull };
		inline static constexpr auto VTABLE{ VTABLE::hkgpConvexHull };

		// members
		void* unk10;  // 0x10
		void* unk18;  // 0x18
		void* unk20;  // 0x20
	};
	static_assert(sizeof(hkgpConvexHull) == 0x28);
	static_assert(offsetof(hkgpConvexHull, unk10) == 0x10);
	static_assert(offsetof(hkgpConvexHull, unk18) == 0x18);
	static_assert(offsetof(hkgpConvexHull, unk20) == 0x20);
}
