#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpCompoundShapeKeyMask.h"

namespace RE
{
	class hknpCompoundShape;
	class hknpShapeKeyMask;

	class __declspec(novtable) hknpCompoundShapeInternalsKeyMask :
		public hknpCompoundShapeKeyMask  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCompoundShapeInternalsKeyMask };
		inline static constexpr auto VTABLE{ VTABLE::hknpCompoundShapeInternalsKeyMask };

		// members
		hknpCompoundShape* m_shape;                  // 0x08
		hkArray<hknpShapeKeyMask*> m_instanceMasks;  // 0x10
		hkArray<std::uint32_t> m_filter;             // 0x20
	};
	static_assert(sizeof(hknpCompoundShapeInternalsKeyMask) == 0x30);
	static_assert(offsetof(hknpCompoundShapeInternalsKeyMask, m_shape) == 0x8);
	static_assert(offsetof(hknpCompoundShapeInternalsKeyMask, m_instanceMasks) == 0x10);
	static_assert(offsetof(hknpCompoundShapeInternalsKeyMask, m_filter) == 0x20);
}
