#pragma once

#include "RE/H/hknpDecoratorShape.h"
#include "RE/H/hknpMaskedShapeMaskWrapper.h"
#include "RE/H/hknpShapeSignals.h"

namespace RE
{
	class hknpShapeKeyMask;

	class __declspec(novtable) hknpMaskedShape :
		public hknpDecoratorShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpMaskedShape };
		inline static constexpr auto VTABLE{ VTABLE::hknpMaskedShape };

		// members
		std::uint8_t unk30[0x8];  // 0x30
		std::uint32_t unk38;  // 0x38
		std::uint8_t pad3C[0x4];  // 0x3C
		hknpShapeKeyMask* m_mask;                  // 0x40
		hknpMaskedShapeMaskWrapper m_maskWrapper;  // 0x48
		hknpShapeSignals m_mutationSignals;        // 0x58
		std::int32_t m_maskSize;                   // 0x68
	};
	static_assert(sizeof(hknpMaskedShape) == 0x70);
	static_assert(offsetof(hknpMaskedShape, m_mask) == 0x40);
	static_assert(offsetof(hknpMaskedShape, m_maskWrapper) == 0x48);
	static_assert(offsetof(hknpMaskedShape, m_mutationSignals) == 0x58);
	static_assert(offsetof(hknpMaskedShape, m_maskSize) == 0x68);
	static_assert(offsetof(hknpMaskedShape, unk30) == 0x30);
	static_assert(offsetof(hknpMaskedShape, unk38) == 0x38);
	static_assert(offsetof(hknpMaskedShape, pad3C) == 0x3C);
}
