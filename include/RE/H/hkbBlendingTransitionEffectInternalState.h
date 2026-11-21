#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbBlendingTransitionEffectInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBlendingTransitionEffectInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbBlendingTransitionEffectInternalState };

		// members
		hkVector4f m_fromPos;                                            // 0x10
		hkQuaternionf m_fromRot;                                         // 0x20
		hkVector4f m_toPos;                                              // 0x30
		hkQuaternionf m_toRot;                                           // 0x40
		hkVector4f m_lastPos;                                            // 0x50
		hkQuaternionf m_lastRot;                                         // 0x60
		hkArray<hkQsTransformf> m_characterPoseAtBeginningOfTransition;  // 0x70
		float m_timeRemaining;                                           // 0x80
		float m_timeInTransition;                                        // 0x84
		std::int8_t m_toGeneratorSelfTranstitionMode;                    // 0x88
		bool m_initializeCharacterPose;                                  // 0x89
		bool m_alignThisFrame;                                           // 0x8A
		bool m_alignmentFinished;                                        // 0x8B
	};
	static_assert(sizeof(hkbBlendingTransitionEffectInternalState) == 0x90);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_fromPos) == 0x10);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_fromRot) == 0x20);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_toPos) == 0x30);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_toRot) == 0x40);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_lastPos) == 0x50);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_lastRot) == 0x60);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_characterPoseAtBeginningOfTransition) == 0x70);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_timeRemaining) == 0x80);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_timeInTransition) == 0x84);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_toGeneratorSelfTranstitionMode) == 0x88);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_initializeCharacterPose) == 0x89);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_alignThisFrame) == 0x8A);
	static_assert(offsetof(hkbBlendingTransitionEffectInternalState, m_alignmentFinished) == 0x8B);
}
