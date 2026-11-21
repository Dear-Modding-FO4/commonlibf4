#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkgpTriangulatorBase :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkgpTriangulatorBase };
		inline static constexpr auto VTABLE{ VTABLE::hkgpTriangulatorBase };
	};
	static_assert(sizeof(hkgpTriangulatorBase) == 0x10);
}
