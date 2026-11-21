#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hknpDecoratorShape.h"

namespace RE
{
	class __declspec(novtable) hknpScaledConvexShapeBase :
		public hknpDecoratorShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpScaledConvexShapeBase };
		inline static constexpr auto VTABLE{ VTABLE::hknpScaledConvexShapeBase };

		// members
		std::uint8_t unk30[0x10];  // 0x30
		hkVector4f m_scale;        // 0x40
		hkVector4f m_translation;  // 0x50
	};
	static_assert(sizeof(hknpScaledConvexShapeBase) == 0x60);
	static_assert(offsetof(hknpScaledConvexShapeBase, m_scale) == 0x40);
	static_assert(offsetof(hknpScaledConvexShapeBase, m_translation) == 0x50);
}
