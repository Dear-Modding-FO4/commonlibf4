#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbHandle.h"
#include "RE/H/hkbModifier.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbHandle;
	class hkbSenseHandleModifierRange;

	class __declspec(novtable) hkbSenseHandleModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSenseHandleModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbSenseHandleModifier };

		enum class SensingMode : std::uint8_t
		{
			kSenseInNearbyRigidBodies = 0,
			kSenseInRigidBodiesOutsideThisCharacter = 1,
			kSenseInOtherCharacterRigidBodies = 2,
			kSenseInThisCharacterRigidBodies = 3,
			kSenseInGivenCharacterRigidBodies = 4,
			kSenseInGivenRigidBody = 5,
			kSenseInOtherCharacterSkeleton = 6,
			kSenseInThisCharacterSkeleton = 7,
			kSenseInGivenCharacterSkeleton = 8,
			kSenseInGivenLocalFrameGroup = 9
		};

		// members
		hkbHandle m_handle;                                 // 0x58
		std::uint8_t unk88[0x8];                            // 0x88
		hkVector4f m_sensorLocalOffset;                     // 0x90
		hkArray<hkbSenseHandleModifierRange> m_ranges;      // 0xA0
		hkbHandle* m_handleOut;                             // 0xB0
		hkbHandle* m_handleIn;                              // 0xB8
		hkStringPtr m_localFrameName;                       // 0xC0
		hkStringPtr m_sensorLocalFrameName;                 // 0xC8
		float m_minDistance;                                // 0xD0
		float m_maxDistance;                                // 0xD4
		float m_distanceOut;                                // 0xD8
		std::uint32_t m_collisionFilterInfo;                // 0xDC
		std::int16_t m_sensorRagdollBoneIndex;              // 0xE0
		std::int16_t m_sensorAnimationBoneIndex;            // 0xE2
		hkEnum<SensingMode, std::int8_t> m_sensingMode;                          // 0xE4
		bool m_extrapolateSensorPosition;                   // 0xE5
		bool m_keepFirstSensedHandle;                       // 0xE6
		bool m_foundHandleOut;                              // 0xE7
		float m_timeSinceLastModify;                        // 0xE8
		std::int32_t m_rangeIndexForEventToSendNextUpdate;  // 0xEC
	};
	static_assert(sizeof(hkbSenseHandleModifier) == 0xF0);
	static_assert(offsetof(hkbSenseHandleModifier, m_handle) == 0x58);
	static_assert(offsetof(hkbSenseHandleModifier, m_sensorLocalOffset) == 0x90);
	static_assert(offsetof(hkbSenseHandleModifier, m_ranges) == 0xA0);
	static_assert(offsetof(hkbSenseHandleModifier, m_handleOut) == 0xB0);
	static_assert(offsetof(hkbSenseHandleModifier, m_handleIn) == 0xB8);
	static_assert(offsetof(hkbSenseHandleModifier, m_localFrameName) == 0xC0);
	static_assert(offsetof(hkbSenseHandleModifier, m_sensorLocalFrameName) == 0xC8);
	static_assert(offsetof(hkbSenseHandleModifier, m_minDistance) == 0xD0);
	static_assert(offsetof(hkbSenseHandleModifier, m_maxDistance) == 0xD4);
	static_assert(offsetof(hkbSenseHandleModifier, m_distanceOut) == 0xD8);
	static_assert(offsetof(hkbSenseHandleModifier, m_collisionFilterInfo) == 0xDC);
	static_assert(offsetof(hkbSenseHandleModifier, m_sensorRagdollBoneIndex) == 0xE0);
	static_assert(offsetof(hkbSenseHandleModifier, m_sensorAnimationBoneIndex) == 0xE2);
	static_assert(offsetof(hkbSenseHandleModifier, m_sensingMode) == 0xE4);
	static_assert(offsetof(hkbSenseHandleModifier, m_extrapolateSensorPosition) == 0xE5);
	static_assert(offsetof(hkbSenseHandleModifier, m_keepFirstSensedHandle) == 0xE6);
	static_assert(offsetof(hkbSenseHandleModifier, m_foundHandleOut) == 0xE7);
	static_assert(offsetof(hkbSenseHandleModifier, m_timeSinceLastModify) == 0xE8);
	static_assert(offsetof(hkbSenseHandleModifier, m_rangeIndexForEventToSendNextUpdate) == 0xEC);
}
