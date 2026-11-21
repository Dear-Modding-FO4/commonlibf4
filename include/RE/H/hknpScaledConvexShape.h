#pragma once

#include "RE/H/hknpScaledConvexShapeBase.h"
#include "RE/H/hknpShapeSignals.h"

namespace RE
{
	class __declspec(novtable) hknpScaledConvexShape :
		public hknpScaledConvexShapeBase  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpScaledConvexShape };
		inline static constexpr auto VTABLE{ VTABLE::hknpScaledConvexShape };

		// members
		hknpShapeSignals m_mutationSignals;  // 0x60
	};
	static_assert(sizeof(hknpScaledConvexShape) == 0x70);
	static_assert(offsetof(hknpScaledConvexShape, m_mutationSignals) == 0x60);
}
