#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hknpShape;

	class __declspec(novtable) hknpCharacterProxyCinfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCharacterProxyCinfo };
		inline static constexpr auto VTABLE{ VTABLE::hknpCharacterProxyCinfo };

		// members
		hkVector4f m_position;                 // 0x10
		hkQuaternionf m_orientation;           // 0x20
		hkVector4f m_velocity;                 // 0x30
		float m_dynamicFriction;               // 0x40
		float m_staticFriction;                // 0x44
		float m_keepContactTolerance;          // 0x48
		std::uint8_t pad4C[0x4];               // 0x4C
		hkVector4f m_up;                       // 0x50
		hknpShape* m_shape;                    // 0x60
		std::uint64_t m_userData;              // 0x68
		void* m_world;                         // 0x70
		std::uint32_t m_collisionFilterInfo;   // 0x78
		float m_keepDistance;                  // 0x7C
		float m_contactAngleSensitivity;       // 0x80
		std::uint32_t m_userPlanes;            // 0x84
		float m_maxCharacterSpeedForSolver;    // 0x88
		float m_characterStrength;             // 0x8C
		float m_characterMass;                 // 0x90
		float m_maxSlope;                      // 0x94
		float m_penetrationRecoverySpeed;      // 0x98
		std::int32_t m_maxCastIterations;      // 0x9C
		bool m_refreshManifoldInCheckSupport;  // 0xA0
		bool m_presenceInWorld;                // 0xA1
	};
	static_assert(sizeof(hknpCharacterProxyCinfo) == 0xB0);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_position) == 0x10);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_orientation) == 0x20);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_velocity) == 0x30);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_dynamicFriction) == 0x40);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_staticFriction) == 0x44);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_keepContactTolerance) == 0x48);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_up) == 0x50);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_shape) == 0x60);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_userData) == 0x68);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_world) == 0x70);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_collisionFilterInfo) == 0x78);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_keepDistance) == 0x7C);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_contactAngleSensitivity) == 0x80);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_userPlanes) == 0x84);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_maxCharacterSpeedForSolver) == 0x88);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_characterStrength) == 0x8C);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_characterMass) == 0x90);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_maxSlope) == 0x94);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_penetrationRecoverySpeed) == 0x98);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_maxCastIterations) == 0x9C);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_refreshManifoldInCheckSupport) == 0xA0);
	static_assert(offsetof(hknpCharacterProxyCinfo, m_presenceInWorld) == 0xA1);
}
