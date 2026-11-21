#pragma once

#include "RE/H/hkcdPlanarEntity.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkcdVertexGeometry :
		public hkcdPlanarEntity  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkcdVertexGeometry };
		inline static constexpr auto VTABLE{ VTABLE::hkcdVertexGeometry };

		// members
		std::uint8_t unk18[0x8];  // 0x18
		hkArray<std::uint8_t> unk20;  // 0x20
		std::uint8_t unk30[0xDB0];  // 0x30
	};
	static_assert(sizeof(hkcdVertexGeometry) == 0xDE0);
	static_assert(offsetof(hkcdVertexGeometry, unk18) == 0x18);
	static_assert(offsetof(hkcdVertexGeometry, unk20) == 0x20);
	static_assert(offsetof(hkcdVertexGeometry, unk30) == 0x30);
}
