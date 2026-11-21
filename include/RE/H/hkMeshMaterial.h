#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkMeshMaterial :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMeshMaterial };
		inline static constexpr auto VTABLE{ VTABLE::hkMeshMaterial };
	};
	static_assert(sizeof(hkMeshMaterial) == 0x10);
}
