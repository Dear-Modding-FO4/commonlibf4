#pragma once

#include "RE/H/hkAabb.h"
#include "RE/H/hknpShape.h"
#include "RE/H/hknpShapeSignals.h"

namespace RE
{
	class __declspec(novtable) hknpDummyShape :
		public hknpShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpDummyShape };
		inline static constexpr auto VTABLE{ VTABLE::hknpDummyShape };

		// members
		hkAabb m_aabb;               // 0x30
		hknpShapeSignals m_signals;  // 0x50
	};
	static_assert(sizeof(hknpDummyShape) == 0x60);
	static_assert(offsetof(hknpDummyShape, m_aabb) == 0x30);
	static_assert(offsetof(hknpDummyShape, m_signals) == 0x50);
}
