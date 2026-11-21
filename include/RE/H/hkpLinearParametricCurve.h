#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpParametricCurve.h"

namespace RE
{
	class __declspec(novtable) hkpLinearParametricCurve :
		public hkpParametricCurve  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpLinearParametricCurve };
		inline static constexpr auto VTABLE{ VTABLE::hkpLinearParametricCurve };

		// members
		float m_smoothingFactor;                             // 0x10
		bool m_closedLoop;                                   // 0x14
		std::uint8_t unk15[0xB];                             // 0x15
		hkVector4f m_dirNotParallelToTangentAlongWholePath;  // 0x20
		hkArray<hkVector4f> m_points;                        // 0x30
		hkArray<float> m_distance;                           // 0x40
	};
	static_assert(sizeof(hkpLinearParametricCurve) == 0x50);
	static_assert(offsetof(hkpLinearParametricCurve, m_smoothingFactor) == 0x10);
	static_assert(offsetof(hkpLinearParametricCurve, m_closedLoop) == 0x14);
	static_assert(offsetof(hkpLinearParametricCurve, m_dirNotParallelToTangentAlongWholePath) == 0x20);
	static_assert(offsetof(hkpLinearParametricCurve, m_points) == 0x30);
	static_assert(offsetof(hkpLinearParametricCurve, m_distance) == 0x40);
}
