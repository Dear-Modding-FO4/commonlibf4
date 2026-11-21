#pragma once
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbLayerGeneratorLayerInternalState
	{
	public:

		enum class FadingState : std::uint8_t
		{
			kFadingStateNone = 0,
			kFadingStateIn = 1,
			kFadingStateOut = 2
		};

		// members
		float m_weight;             // 0x00
		float m_timeElapsed;        // 0x04
		float m_onFraction;         // 0x08
		hkEnum<FadingState, std::int8_t> m_fadingState;  // 0x0C
		bool m_useMotion;           // 0x0D
		bool m_syncNextFrame;       // 0x0E
		bool m_isActive;            // 0x0F
	};
	static_assert(sizeof(hkbLayerGeneratorLayerInternalState) == 0x10);
	static_assert(offsetof(hkbLayerGeneratorLayerInternalState, m_weight) == 0x0);
	static_assert(offsetof(hkbLayerGeneratorLayerInternalState, m_timeElapsed) == 0x4);
	static_assert(offsetof(hkbLayerGeneratorLayerInternalState, m_onFraction) == 0x8);
	static_assert(offsetof(hkbLayerGeneratorLayerInternalState, m_fadingState) == 0xC);
	static_assert(offsetof(hkbLayerGeneratorLayerInternalState, m_useMotion) == 0xD);
	static_assert(offsetof(hkbLayerGeneratorLayerInternalState, m_syncNextFrame) == 0xE);
	static_assert(offsetof(hkbLayerGeneratorLayerInternalState, m_isActive) == 0xF);
}
