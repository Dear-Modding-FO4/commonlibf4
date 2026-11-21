#pragma once

#include "RE/H/hknpCompoundShape.h"

namespace RE
{
	class hknpStaticCompoundShapeData;

	class __declspec(novtable) hknpStaticCompoundShape :
		public hknpCompoundShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpStaticCompoundShape };
		inline static constexpr auto VTABLE{ VTABLE::hknpStaticCompoundShape };

		// members
		hknpStaticCompoundShapeData* m_boundingVolumeData;  // 0xC0
	};
	static_assert(sizeof(hknpStaticCompoundShape) == 0xD0);
	static_assert(offsetof(hknpStaticCompoundShape, m_boundingVolumeData) == 0xC0);
}
