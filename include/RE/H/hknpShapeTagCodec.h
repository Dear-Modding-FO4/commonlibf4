#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpShapeTagCodec :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpShapeTagCodec };
		inline static constexpr auto VTABLE{ VTABLE::hknpShapeTagCodec };
		enum class Type : std::uint32_t
		{
			kTypeNull = 0,
			kTypeMaterialPalette = 1,
			kTypeUfm = 2,
			kTypeUser = 3
		};

	};
	static_assert(sizeof(hknpShapeTagCodec) == 0x10);
}
