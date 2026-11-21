#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hknpShape;

	class __declspec(novtable) hknpCharacterRigidBodyCinfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCharacterRigidBodyCinfo };
		inline static constexpr auto VTABLE{ VTABLE::hknpCharacterRigidBodyCinfo };

		// members
		std::uint32_t m_collisionFilterInfo;  // 0x10
		std::uint8_t pad14[0x4];              // 0x14
		hknpShape* m_shape;                   // 0x18
		void* m_world;                        // 0x20
		std::uint8_t unk28[0x8];              // 0x28
		hkVector4f m_position;                // 0x30
		hkQuaternionf m_orientation;          // 0x40
		float m_mass;                         // 0x50
		float m_dynamicFriction;              // 0x54
		float m_staticFriction;               // 0x58
		float m_weldingTolerance;             // 0x5C
		std::uint32_t m_reservedBodyId;       // 0x60
		std::uint8_t m_additionMode;          // 0x64
		std::uint8_t m_additionFlags;         // 0x65
		std::uint8_t unk66[0xA];              // 0x66
		hkVector4f m_up;                      // 0x70
		float m_maxSlope;                     // 0x80
		float m_maxForce;                     // 0x84
		float m_maxSpeedForSimplexSolver;     // 0x88
		float m_supportDistance;              // 0x8C
		float m_hardSupportDistance;          // 0x90
	};
	static_assert(sizeof(hknpCharacterRigidBodyCinfo) == 0xA0);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_collisionFilterInfo) == 0x10);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_shape) == 0x18);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_world) == 0x20);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_position) == 0x30);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_orientation) == 0x40);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_mass) == 0x50);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_dynamicFriction) == 0x54);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_staticFriction) == 0x58);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_weldingTolerance) == 0x5C);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_reservedBodyId) == 0x60);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_additionMode) == 0x64);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_additionFlags) == 0x65);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_up) == 0x70);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_maxSlope) == 0x80);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_maxForce) == 0x84);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_maxSpeedForSimplexSolver) == 0x88);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_supportDistance) == 0x8C);
	static_assert(offsetof(hknpCharacterRigidBodyCinfo, m_hardSupportDistance) == 0x90);
}
