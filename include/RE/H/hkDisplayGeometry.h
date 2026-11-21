#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkDisplayGeometry :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayGeometry };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayGeometry };

		// add
		virtual void buildGeometry();  // 0x20 [04] (void)
		virtual void getWireframeGeometry();  // 0x28 [05] (hkArrayBase_hkVector4f_&_hkMemoryAllocator&)

		// members
		std::uint8_t unk10[0x10];  // 0x10
		hkVector4f unk20;  // 0x20
		std::uint8_t unk30[0x40];  // 0x30
	};
	static_assert(sizeof(hkDisplayGeometry) == 0x70);
	static_assert(offsetof(hkDisplayGeometry, unk10) == 0x10);
	static_assert(offsetof(hkDisplayGeometry, unk20) == 0x20);
	static_assert(offsetof(hkDisplayGeometry, unk30) == 0x30);
}
