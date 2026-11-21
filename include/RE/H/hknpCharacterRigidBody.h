#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hknpBodyId.h"

namespace RE
{
	class hknpCharacterRigidBodyListener;
	class hknpEvent;
	class hknpEventHandlerInput;
	class hknpShape;
	class hknpWorld;

	class __declspec(novtable) hknpCharacterRigidBody :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpCharacterRigidBody };
		inline static constexpr auto VTABLE{ VTABLE::hknpCharacterRigidBody };

		// add
		virtual void onCollisionDetected(const hknpEventHandlerInput& a_input, const hknpEvent& a_event);  // 0x20 [04]
		virtual void checkSupport();  // 0x28 [05] (hkStepInfo&_hknpCharacterSurfaceInfo&)
		virtual void findSupportingContacts();  // 0x30 [06] (const hkStepInfo& stepInfo, hkArray<int>& supportingContactsIndicesOut)
		virtual void getGround();  // 0x38 [07] (const hkArray<int>& supportingContactsIndices, hknpCharacterSurfaceInfo& ground, const hkStepInfo& stepInfo)

		// members
		hknpBodyId m_bodyId;                         // 0x10
		std::uint8_t pad14[0x4];                     // 0x14
		const hknpShape* m_shape;                    // 0x18
		hknpWorld* m_world;                          // 0x20
		hkRefPtr<hknpCharacterRigidBodyListener> m_listener;  // 0x28
		hkVector4f m_up;                             // 0x30
		float m_maxSlopeCosine;                      // 0x40
		float m_maxSpeedForSimplexSolver;            // 0x44
		float m_supportDistance;                     // 0x48
		float m_hardSupportDistance;                 // 0x4C
		std::uint8_t unk50[0x10];                    // 0x50
		float m_maxForce;                            // 0x60
		std::uint8_t pad64[0x4];                     // 0x64
		hkArray<std::uint8_t> m_manifold;            // 0x68
		std::uint8_t unk78[0x8];                     // 0x78
	};
	static_assert(sizeof(hknpCharacterRigidBody) == 0x80);
	static_assert(offsetof(hknpCharacterRigidBody, m_bodyId) == 0x10);
	static_assert(offsetof(hknpCharacterRigidBody, pad14) == 0x14);
	static_assert(offsetof(hknpCharacterRigidBody, m_shape) == 0x18);
	static_assert(offsetof(hknpCharacterRigidBody, m_world) == 0x20);
	static_assert(offsetof(hknpCharacterRigidBody, m_listener) == 0x28);
	static_assert(offsetof(hknpCharacterRigidBody, m_up) == 0x30);
	static_assert(offsetof(hknpCharacterRigidBody, m_maxSlopeCosine) == 0x40);
	static_assert(offsetof(hknpCharacterRigidBody, m_maxSpeedForSimplexSolver) == 0x44);
	static_assert(offsetof(hknpCharacterRigidBody, m_supportDistance) == 0x48);
	static_assert(offsetof(hknpCharacterRigidBody, m_hardSupportDistance) == 0x4C);
	static_assert(offsetof(hknpCharacterRigidBody, unk50) == 0x50);
	static_assert(offsetof(hknpCharacterRigidBody, m_maxForce) == 0x60);
	static_assert(offsetof(hknpCharacterRigidBody, pad64) == 0x64);
	static_assert(offsetof(hknpCharacterRigidBody, m_manifold) == 0x68);
	static_assert(offsetof(hknpCharacterRigidBody, unk78) == 0x78);
}
