#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hknpMaterial.h"

namespace RE
{
	class __declspec(novtable) hknpRefMaterial :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpRefMaterial };
		inline static constexpr auto VTABLE{ VTABLE::hknpRefMaterial };

		// members
		hknpMaterial m_material;  // 0x10
	};
	static_assert(sizeof(hknpRefMaterial) == 0x60);
	static_assert(offsetof(hknpRefMaterial, m_material) == 0x10);
}
