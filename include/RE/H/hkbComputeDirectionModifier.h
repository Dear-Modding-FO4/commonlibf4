#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbComputeDirectionModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbComputeDirectionModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbComputeDirectionModifier };

		// members
		std::uint8_t unk58[0x8];    // 0x58
		hkVector4f m_pointIn;       // 0x60
		hkVector4f m_pointOut;      // 0x70
		float m_groundAngleOut;     // 0x80
		float m_upAngleOut;         // 0x84
		float m_verticalOffset;     // 0x88
		bool m_reverseGroundAngle;  // 0x8C
		bool m_reverseUpAngle;      // 0x8D
		bool m_projectPoint;        // 0x8E
		bool m_normalizePoint;      // 0x8F
		bool m_computeOnlyOnce;     // 0x90
		bool m_computedOutput;      // 0x91
	};
	static_assert(sizeof(hkbComputeDirectionModifier) == 0xA0);
	static_assert(offsetof(hkbComputeDirectionModifier, m_pointIn) == 0x60);
	static_assert(offsetof(hkbComputeDirectionModifier, m_pointOut) == 0x70);
	static_assert(offsetof(hkbComputeDirectionModifier, m_groundAngleOut) == 0x80);
	static_assert(offsetof(hkbComputeDirectionModifier, m_upAngleOut) == 0x84);
	static_assert(offsetof(hkbComputeDirectionModifier, m_verticalOffset) == 0x88);
	static_assert(offsetof(hkbComputeDirectionModifier, m_reverseGroundAngle) == 0x8C);
	static_assert(offsetof(hkbComputeDirectionModifier, m_reverseUpAngle) == 0x8D);
	static_assert(offsetof(hkbComputeDirectionModifier, m_projectPoint) == 0x8E);
	static_assert(offsetof(hkbComputeDirectionModifier, m_normalizePoint) == 0x8F);
	static_assert(offsetof(hkbComputeDirectionModifier, m_computeOnlyOnce) == 0x90);
	static_assert(offsetof(hkbComputeDirectionModifier, m_computedOutput) == 0x91);
}
