#pragma once

#include "RE/H/hknpShapeKeyMask.h"

namespace RE
{
	class __declspec(novtable) hknpMaskedShapeMaskWrapper :
		public hknpShapeKeyMask  // 0x00
	{
	public:

		// members
		void* m_maskedShape;  // 0x08
	};
	static_assert(sizeof(hknpMaskedShapeMaskWrapper) == 0x10);
	static_assert(offsetof(hknpMaskedShapeMaskWrapper, m_maskedShape) == 0x8);
}
