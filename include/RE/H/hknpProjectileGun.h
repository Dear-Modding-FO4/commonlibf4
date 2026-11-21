#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hknpFirstPersonGun.h"

namespace RE
{
	class __declspec(novtable) hknpProjectileGun :
		public hknpFirstPersonGun  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpProjectileGun };
		inline static constexpr auto VTABLE{ VTABLE::hknpProjectileGun };

		// add
		virtual void onGunFired();  // 0x50 [0A] (_Inout_ hknpWorld* world, const hkTransform& viewTransform)
		virtual void onUpdate();  // 0x58 [0B] (float_hknpWorld__hknpBodyId_hkTransformf&_bool_bool)
		virtual void destroyAgedProjectiles();  // 0x60 [0C] (float)

		// members
		std::int32_t m_maxProjectiles;  // 0x40
		float m_reloadTime;             // 0x44
		float m_reload;                 // 0x48
		std::uint8_t pad4C[0x4];        // 0x4C
		hkArray<void*> m_projectiles;   // 0x50
		void* m_npWorld;                // 0x60
	};
	static_assert(sizeof(hknpProjectileGun) == 0x68);
	static_assert(offsetof(hknpProjectileGun, m_maxProjectiles) == 0x40);
	static_assert(offsetof(hknpProjectileGun, m_reloadTime) == 0x44);
	static_assert(offsetof(hknpProjectileGun, m_reload) == 0x48);
	static_assert(offsetof(hknpProjectileGun, m_projectiles) == 0x50);
	static_assert(offsetof(hknpProjectileGun, m_npWorld) == 0x60);
}
