#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbModifier.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbJigglerGroup;

	class __declspec(novtable) hkbJigglerModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbJigglerModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbJigglerModifier };

		enum class JiggleCoordinates : std::uint8_t
		{
			kJiggleInWorldCoordinates = 0,
			kJiggleInModelCoordinates = 1
		};

		// members
		hkArray<hkbJigglerGroup*> m_jigglerGroups;  // 0x58
		hkEnum<JiggleCoordinates, std::int8_t> m_jiggleCoordinates;            // 0x68
		std::uint8_t pad69[0x7];                    // 0x69
		std::uint8_t m_currentVelocitiesWS[0x10];   // 0x70
		std::uint8_t m_currentPositions[0x10];      // 0x80
		float m_timeStep;                           // 0x90
		bool m_initNextModify;                      // 0x94
	};
	static_assert(sizeof(hkbJigglerModifier) == 0x98);
	static_assert(offsetof(hkbJigglerModifier, m_jigglerGroups) == 0x58);
	static_assert(offsetof(hkbJigglerModifier, m_jiggleCoordinates) == 0x68);
	static_assert(offsetof(hkbJigglerModifier, m_currentVelocitiesWS) == 0x70);
	static_assert(offsetof(hkbJigglerModifier, m_currentPositions) == 0x80);
	static_assert(offsetof(hkbJigglerModifier, m_timeStep) == 0x90);
	static_assert(offsetof(hkbJigglerModifier, m_initNextModify) == 0x94);
}
