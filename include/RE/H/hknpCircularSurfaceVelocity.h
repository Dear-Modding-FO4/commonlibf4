#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hknpSurfaceVelocity.h"

namespace RE
{
	class __declspec(novtable) hknpCircularSurfaceVelocity :
		public hknpSurfaceVelocity  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCircularSurfaceVelocity };
		inline static constexpr auto VTABLE{ VTABLE::hknpCircularSurfaceVelocity };

		// members
		bool m_velocityIsLocalSpace;   // 0x10
		std::uint8_t unk11[0xF];       // 0x11
		hkVector4f m_pivot;            // 0x20
		hkVector4f m_angularVelocity;  // 0x30
	};
	static_assert(sizeof(hknpCircularSurfaceVelocity) == 0x40);
	static_assert(offsetof(hknpCircularSurfaceVelocity, m_velocityIsLocalSpace) == 0x10);
	static_assert(offsetof(hknpCircularSurfaceVelocity, m_pivot) == 0x20);
	static_assert(offsetof(hknpCircularSurfaceVelocity, m_angularVelocity) == 0x30);
}
