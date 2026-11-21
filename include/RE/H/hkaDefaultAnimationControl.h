#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkaAnimationControl.h"

namespace RE
{
	class hkaDefaultAnimationControlListener;
	class hkaDefaultAnimationControlMapperData;

	class __declspec(novtable) hkaDefaultAnimationControl :
		public hkaAnimationControl  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaDefaultAnimationControl };
		inline static constexpr auto VTABLE{ VTABLE::hkaDefaultAnimationControl };

		// members
		float m_masterWeight;                                             // 0x58
		float m_playbackSpeed;                                            // 0x5C
		std::uint32_t m_overflowCount;                                    // 0x60
		std::uint32_t m_underflowCount;                                   // 0x64
		std::int32_t m_maxCycles;                                         // 0x68
		std::uint8_t pad6C[0x4];                                          // 0x6C
		hkVector4f m_easeInCurve;                                         // 0x70
		hkVector4f m_easeOutCurve;                                        // 0x80
		float m_easeInvDuration;                                          // 0x90
		float m_easeT;                                                    // 0x94
		std::uint8_t m_easeStatus[0x4];                                   // 0x98
		float m_cropStartAmountLocalTime;                                 // 0x9C
		float m_cropEndAmountLocalTime;                                   // 0xA0
		std::uint8_t padA4[0x4];                                          // 0xA4
		hkArray<hkaDefaultAnimationControlListener*> m_defaultListeners;  // 0xA8
		hkaDefaultAnimationControlMapperData* m_mapper;                   // 0xB8
	};
	static_assert(sizeof(hkaDefaultAnimationControl) == 0xC0);
	static_assert(offsetof(hkaDefaultAnimationControl, m_masterWeight) == 0x58);
	static_assert(offsetof(hkaDefaultAnimationControl, m_playbackSpeed) == 0x5C);
	static_assert(offsetof(hkaDefaultAnimationControl, m_overflowCount) == 0x60);
	static_assert(offsetof(hkaDefaultAnimationControl, m_underflowCount) == 0x64);
	static_assert(offsetof(hkaDefaultAnimationControl, m_maxCycles) == 0x68);
	static_assert(offsetof(hkaDefaultAnimationControl, m_easeInCurve) == 0x70);
	static_assert(offsetof(hkaDefaultAnimationControl, m_easeOutCurve) == 0x80);
	static_assert(offsetof(hkaDefaultAnimationControl, m_easeInvDuration) == 0x90);
	static_assert(offsetof(hkaDefaultAnimationControl, m_easeT) == 0x94);
	static_assert(offsetof(hkaDefaultAnimationControl, m_easeStatus) == 0x98);
	static_assert(offsetof(hkaDefaultAnimationControl, m_cropStartAmountLocalTime) == 0x9C);
	static_assert(offsetof(hkaDefaultAnimationControl, m_cropEndAmountLocalTime) == 0xA0);
	static_assert(offsetof(hkaDefaultAnimationControl, m_defaultListeners) == 0xA8);
	static_assert(offsetof(hkaDefaultAnimationControl, m_mapper) == 0xB8);
}
