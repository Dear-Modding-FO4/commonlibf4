#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkAabb.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hknpBodyId.h"

namespace RE
{
	class hknpShape;
	class hknpWorld;

	class __declspec(novtable) hknpCharacterProxy :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCharacterProxy };
		inline static constexpr auto VTABLE{ VTABLE::hknpCharacterProxy };

		// members
		hkArray<std::uint8_t> m_manifold;  // 0x10
		const hknpShape* m_shape;  // 0x20
		std::uint64_t m_userData;  // 0x28
		hknpBodyId m_bodyId;  // 0x30
		std::uint32_t m_collisionFilterInfo;  // 0x34
		hknpWorld* m_world;  // 0x38
		hkTransformf m_transform;  // 0x40
		hkAabb m_aabb;  // 0x80
		hkVector4f m_velocity;  // 0xA0
		hkVector4f m_lastDisplacement;  // 0xB0
		float m_dynamicFriction;  // 0xC0
		float m_staticFriction;  // 0xC4
		std::uint8_t unkC8[0x8];  // 0xC8
		hkVector4f m_up;  // 0xD0
		float m_keepDistance;  // 0xE0
		float m_keepContactTolerance;  // 0xE4
		float m_contactAngleSensitivity;  // 0xE8
		std::int32_t m_userPlanes;  // 0xEC
		float m_maxCharacterSpeedForSolver;  // 0xF0
		float m_characterStrength;  // 0xF4
		float m_characterMass;  // 0xF8
		std::uint8_t padFC[0x4];  // 0xFC
		hkArray<std::uint8_t> m_listeners;  // 0x100
		hkArray<std::uint8_t> m_overlappingTriggers;  // 0x110
		float m_maxSlopeCosine;  // 0x120
		float m_penetrationRecoverySpeed;  // 0x124
		std::int32_t m_maxCastIterations;  // 0x128
		bool m_refreshManifoldInCheckSupport;  // 0x12C
		std::uint8_t pad12D[0x3];  // 0x12D
	};
	static_assert(sizeof(hknpCharacterProxy) == 0x130);
	static_assert(offsetof(hknpCharacterProxy, m_manifold) == 0x10);
	static_assert(offsetof(hknpCharacterProxy, m_shape) == 0x20);
	static_assert(offsetof(hknpCharacterProxy, m_userData) == 0x28);
	static_assert(offsetof(hknpCharacterProxy, m_bodyId) == 0x30);
	static_assert(offsetof(hknpCharacterProxy, m_collisionFilterInfo) == 0x34);
	static_assert(offsetof(hknpCharacterProxy, m_world) == 0x38);
	static_assert(offsetof(hknpCharacterProxy, m_transform) == 0x40);
	static_assert(offsetof(hknpCharacterProxy, m_aabb) == 0x80);
	static_assert(offsetof(hknpCharacterProxy, m_velocity) == 0xA0);
	static_assert(offsetof(hknpCharacterProxy, m_lastDisplacement) == 0xB0);
	static_assert(offsetof(hknpCharacterProxy, m_dynamicFriction) == 0xC0);
	static_assert(offsetof(hknpCharacterProxy, m_staticFriction) == 0xC4);
	static_assert(offsetof(hknpCharacterProxy, unkC8) == 0xC8);
	static_assert(offsetof(hknpCharacterProxy, m_up) == 0xD0);
	static_assert(offsetof(hknpCharacterProxy, m_keepDistance) == 0xE0);
	static_assert(offsetof(hknpCharacterProxy, m_keepContactTolerance) == 0xE4);
	static_assert(offsetof(hknpCharacterProxy, m_contactAngleSensitivity) == 0xE8);
	static_assert(offsetof(hknpCharacterProxy, m_userPlanes) == 0xEC);
	static_assert(offsetof(hknpCharacterProxy, m_maxCharacterSpeedForSolver) == 0xF0);
	static_assert(offsetof(hknpCharacterProxy, m_characterStrength) == 0xF4);
	static_assert(offsetof(hknpCharacterProxy, m_characterMass) == 0xF8);
	static_assert(offsetof(hknpCharacterProxy, padFC) == 0xFC);
	static_assert(offsetof(hknpCharacterProxy, m_listeners) == 0x100);
	static_assert(offsetof(hknpCharacterProxy, m_overlappingTriggers) == 0x110);
	static_assert(offsetof(hknpCharacterProxy, m_maxSlopeCosine) == 0x120);
	static_assert(offsetof(hknpCharacterProxy, m_penetrationRecoverySpeed) == 0x124);
	static_assert(offsetof(hknpCharacterProxy, m_maxCastIterations) == 0x128);
	static_assert(offsetof(hknpCharacterProxy, m_refreshManifoldInCheckSupport) == 0x12C);
	static_assert(offsetof(hknpCharacterProxy, pad12D) == 0x12D);
}
