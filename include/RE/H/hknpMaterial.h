#pragma once

#include "RE/H/hkEnum.h"
#include "RE/H/hkHalf.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkUFloat8.h"

namespace RE
{
	class hknpSurfaceVelocity;

	class hknpMaterial
	{
	public:

		enum class TriggerType : std::uint8_t
		{
			kTriggerTypeNone = 0,
			kTriggerTypeBroadPhase = 1,
			kTriggerTypeNarrowPhase = 2,
			kTriggerTypeContactSolver = 3
		};
		enum class CombinePolicy : std::uint8_t
		{
			kCombineAvg = 0,
			kCombineMin = 1,
			kCombineMax = 2
		};
		enum class MassChangerCategory : std::uint8_t
		{
			kMassChangerIgnore = 0,
			kMassChangerDebris = 1,
			kMassChangerHeavy = 2
		};

		// members
		hkStringPtr m_name;                                               // 0x00
		std::uint32_t m_isExclusive;                                      // 0x08
		std::int32_t m_flags;                                             // 0x0C
		hkEnum<TriggerType, std::uint8_t> m_triggerType;                  // 0x10
		hkUFloat8 m_triggerManifoldTolerance;                             // 0x11
		hkHalf m_dynamicFriction;                                         // 0x12
		hkHalf m_staticFriction;                                          // 0x14
		hkHalf m_restitution;                                             // 0x16
		hkEnum<CombinePolicy, std::uint8_t> m_frictionCombinePolicy;      // 0x18
		hkEnum<CombinePolicy, std::uint8_t> m_restitutionCombinePolicy;   // 0x19
		hkHalf m_weldingTolerance;                                        // 0x1A
		float m_maxContactImpulse;                                        // 0x1C
		float m_fractionOfClippedImpulseToApply;                          // 0x20
		hkEnum<MassChangerCategory, std::uint8_t> m_massChangerCategory;  // 0x24
		std::uint8_t unk25[0x1];                                          // 0x25
		hkHalf m_massChangerHeavyObjectFactor;                            // 0x26
		hkHalf m_softContactForceFactor;                                  // 0x28
		hkHalf m_softContactDampFactor;                                   // 0x2A
		hkUFloat8 m_softContactSeperationVelocity;                        // 0x2C
		std::uint8_t pad2D[0x3];                                          // 0x2D
		hknpSurfaceVelocity* m_surfaceVelocity;                           // 0x30
		hkHalf m_disablingCollisionsBetweenCvxCvxDynamicObjectsDistance;  // 0x38
		std::uint8_t pad3A[0x6];                                          // 0x3A
		std::uint64_t m_userData;                                         // 0x40
		bool m_isShared;                                                  // 0x48
	};
	static_assert(sizeof(hknpMaterial) == 0x50);
	static_assert(offsetof(hknpMaterial, m_name) == 0x0);
	static_assert(offsetof(hknpMaterial, m_isExclusive) == 0x8);
	static_assert(offsetof(hknpMaterial, m_flags) == 0xC);
	static_assert(offsetof(hknpMaterial, m_triggerType) == 0x10);
	static_assert(offsetof(hknpMaterial, m_triggerManifoldTolerance) == 0x11);
	static_assert(offsetof(hknpMaterial, m_dynamicFriction) == 0x12);
	static_assert(offsetof(hknpMaterial, m_staticFriction) == 0x14);
	static_assert(offsetof(hknpMaterial, m_restitution) == 0x16);
	static_assert(offsetof(hknpMaterial, m_frictionCombinePolicy) == 0x18);
	static_assert(offsetof(hknpMaterial, m_restitutionCombinePolicy) == 0x19);
	static_assert(offsetof(hknpMaterial, m_weldingTolerance) == 0x1A);
	static_assert(offsetof(hknpMaterial, m_maxContactImpulse) == 0x1C);
	static_assert(offsetof(hknpMaterial, m_fractionOfClippedImpulseToApply) == 0x20);
	static_assert(offsetof(hknpMaterial, m_massChangerCategory) == 0x24);
	static_assert(offsetof(hknpMaterial, m_massChangerHeavyObjectFactor) == 0x26);
	static_assert(offsetof(hknpMaterial, m_softContactForceFactor) == 0x28);
	static_assert(offsetof(hknpMaterial, m_softContactDampFactor) == 0x2A);
	static_assert(offsetof(hknpMaterial, m_softContactSeperationVelocity) == 0x2C);
	static_assert(offsetof(hknpMaterial, m_surfaceVelocity) == 0x30);
	static_assert(offsetof(hknpMaterial, m_disablingCollisionsBetweenCvxCvxDynamicObjectsDistance) == 0x38);
	static_assert(offsetof(hknpMaterial, m_userData) == 0x40);
	static_assert(offsetof(hknpMaterial, m_isShared) == 0x48);
}
