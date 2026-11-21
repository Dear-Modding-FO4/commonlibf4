#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hknpWorld.h"

namespace RE
{
	class hknpContactImpulseEvent;

	class __declspec(novtable) hknpGunProjectile :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpGunProjectile };
		inline static constexpr auto VTABLE{ VTABLE::hknpGunProjectile };

		// add
		virtual void onDestroy();  // 0x20 [04] (_Inout_ hknpWorld* npWorld)
		virtual void onHit(hknpWorld* a_npWorld, const hknpContactImpulseEvent* a_evt);  // 0x28 [05]
		virtual void onUpdate(hknpWorld* a_npWorld, float a_timeStep);  // 0x30 [06]

		// members
		std::uint8_t unk10;        // 0x10
		std::uint8_t unk11[0x17];  // 0x11
	};
	static_assert(sizeof(hknpGunProjectile) == 0x28);
	static_assert(offsetof(hknpGunProjectile, unk10) == 0x10);
}
