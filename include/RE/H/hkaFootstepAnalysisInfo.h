#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkaFootstepAnalysisInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaFootstepAnalysisInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkaFootstepAnalysisInfo };

		// members
		hkArray<char> m_name;           // 0x10
		hkArray<char> m_nameStrike;     // 0x20
		hkArray<char> m_nameLift;       // 0x30
		hkArray<char> m_nameLock;       // 0x40
		hkArray<char> m_nameUnlock;     // 0x50
		hkArray<float> m_minPos;        // 0x60
		hkArray<float> m_maxPos;        // 0x70
		hkArray<float> m_minVel;        // 0x80
		hkArray<float> m_maxVel;        // 0x90
		hkArray<float> m_allBonesDown;  // 0xA0
		hkArray<float> m_anyBonesDown;  // 0xB0
		float m_posTol;                 // 0xC0
		float m_velTol;                 // 0xC4
		float m_duration;               // 0xC8
	};
	static_assert(sizeof(hkaFootstepAnalysisInfo) == 0xD0);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_name) == 0x10);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_nameStrike) == 0x20);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_nameLift) == 0x30);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_nameLock) == 0x40);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_nameUnlock) == 0x50);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_minPos) == 0x60);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_maxPos) == 0x70);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_minVel) == 0x80);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_maxVel) == 0x90);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_allBonesDown) == 0xA0);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_anyBonesDown) == 0xB0);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_posTol) == 0xC0);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_velTol) == 0xC4);
	static_assert(offsetof(hkaFootstepAnalysisInfo, m_duration) == 0xC8);
}
