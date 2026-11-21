#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hknpWorld.h"

namespace RE
{
	class __declspec(novtable) hknpFirstPersonGun :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpFirstPersonGun };
		inline static constexpr auto VTABLE{ VTABLE::hknpFirstPersonGun };

		// add
		virtual void initGun(hknpWorld* a_world);  // 0x20 [04]
		virtual void fireGun(hknpWorld* a_world, const hkTransformf& a_viewTransform);  // 0x28 [05]
		virtual void stepGun();  // 0x30 [06] (float_hknpWorld__hknpBodyId_hkTransformf&_bool_bool)
		virtual void quitGun(hknpWorld* a_world);  // 0x38 [07]
		virtual const char* getName();  // 0x40 [08]
		virtual void reset();  // 0x48 [09] (hknpWorld_)

		enum class Type : std::uint8_t
		{
			kWeaponTypeInvalid = 0,
			kWeaponTypeBallgun = 1,
			kWeaponTypeGrenadegun = 2,
			kWeaponTypeGravitygun = 3,
			kWeaponTypeMountedballgun = 4,
			kWeaponTypeTweakergun = 5,
			kWeaponTypeMissilegun = 6,
			kWeaponTypeRaycastgun = 7,
			kWeaponTypeSpheregun = 8,
			kWeaponTypeStickygun = 9,
			kWeaponTypeNumTypes = 10
		};
		enum class KeyboardKey : std::uint8_t
		{
			kKeyF1 = 112,
			kKeyF2 = 113,
			kKeyF3 = 114,
			kKeyF4 = 115,
			kKeyF5 = 116,
			kKeyF6 = 117,
			kKeyF7 = 118,
			kKeyF8 = 119,
			kKeyF9 = 120,
			kKeyF10 = 121,
			kKeyF11 = 122,
			kKeyF12 = 123
		};

		// members
		hkEnum<Type, std::uint8_t> m_type;                // 0x10
		std::uint8_t pad11[0x7];                          // 0x11
		hkStringPtr m_name;                               // 0x18
		hkEnum<KeyboardKey, std::uint8_t> m_keyboardKey;  // 0x20
		std::uint8_t pad21[0x7];                          // 0x21
		hkArray<void*> m_listeners;                       // 0x28
		std::uint32_t m_collisionFilterInfo;              // 0x38
	};
	static_assert(sizeof(hknpFirstPersonGun) == 0x40);
	static_assert(offsetof(hknpFirstPersonGun, m_type) == 0x10);
	static_assert(offsetof(hknpFirstPersonGun, m_name) == 0x18);
	static_assert(offsetof(hknpFirstPersonGun, m_keyboardKey) == 0x20);
	static_assert(offsetof(hknpFirstPersonGun, m_listeners) == 0x28);
	static_assert(offsetof(hknpFirstPersonGun, m_collisionFilterInfo) == 0x38);
}
