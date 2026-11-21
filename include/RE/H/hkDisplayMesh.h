#pragma once

#include "RE/H/hkDisplayGeometry.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkDisplayMesh :
		public hkDisplayGeometry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDisplayMesh };
		inline static constexpr auto VTABLE{ VTABLE::hkDisplayMesh };

		// members
		void* unk70;              // 0x70
		hkArray<std::uint8_t> unk78;  // 0x78
		std::uint8_t unk88[0x8];  // 0x88
	};
	static_assert(sizeof(hkDisplayMesh) == 0x90);
	static_assert(offsetof(hkDisplayMesh, unk70) == 0x70);
	static_assert(offsetof(hkDisplayMesh, unk78) == 0x78);
}
