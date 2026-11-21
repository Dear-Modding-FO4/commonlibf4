#pragma once

#include "RE/H/hknpStaticCompoundShape.h"

namespace RE
{
	class __declspec(novtable) hknpStaticCompoundShapeInternals :
		public hknpStaticCompoundShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpStaticCompoundShapeInternals };
		inline static constexpr auto VTABLE{ VTABLE::hknpStaticCompoundShapeInternals };
	};
	static_assert(sizeof(hknpStaticCompoundShapeInternals) == 0xD0);
}
