#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hknpFirstPersonGun.h"

namespace RE
{
	class __declspec(novtable) hknpBallGun :
		public hknpFirstPersonGun  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBallGun };
		inline static constexpr auto VTABLE{ VTABLE::hknpBallGun };

		// members
		float m_bulletRadius;                 // 0x40
		float m_bulletVelocity;               // 0x44
		float m_bulletMass;                   // 0x48
		float m_damageMultiplier;             // 0x4C
		std::int32_t m_maxBulletsInWorld;     // 0x50
		std::uint8_t unk54[0xC];              // 0x54
		hkVector4f m_bulletOffsetFromCenter;  // 0x60
		void* m_addedBodyIds;                 // 0x70
		std::uint16_t m_materialId;           // 0x78
		std::uint16_t m_motionPropertiesId;   // 0x7A
		std::uint8_t pad7C[0x4];              // 0x7C
		void* m_bulletShape;                  // 0x80
		std::uint32_t m_raiseContactEvents;   // 0x88
	};
	static_assert(sizeof(hknpBallGun) == 0x90);
	static_assert(offsetof(hknpBallGun, m_bulletRadius) == 0x40);
	static_assert(offsetof(hknpBallGun, m_bulletVelocity) == 0x44);
	static_assert(offsetof(hknpBallGun, m_bulletMass) == 0x48);
	static_assert(offsetof(hknpBallGun, m_damageMultiplier) == 0x4C);
	static_assert(offsetof(hknpBallGun, m_maxBulletsInWorld) == 0x50);
	static_assert(offsetof(hknpBallGun, m_bulletOffsetFromCenter) == 0x60);
	static_assert(offsetof(hknpBallGun, m_addedBodyIds) == 0x70);
	static_assert(offsetof(hknpBallGun, m_materialId) == 0x78);
	static_assert(offsetof(hknpBallGun, m_motionPropertiesId) == 0x7A);
	static_assert(offsetof(hknpBallGun, m_bulletShape) == 0x80);
	static_assert(offsetof(hknpBallGun, m_raiseContactEvents) == 0x88);
}
