#pragma once

#include "RE/H/hkbRigidBodySetup.h"

namespace RE
{
	class hkReferencedObject;

	class hkbCharacterControllerSetup
	{
	public:

		// members
		hkbRigidBodySetup m_rigidBodySetup;     // 0x00
		hkReferencedObject* m_controllerCinfo;  // 0x20
	};
	static_assert(sizeof(hkbCharacterControllerSetup) == 0x28);
	static_assert(offsetof(hkbCharacterControllerSetup, m_rigidBodySetup) == 0x0);
	static_assert(offsetof(hkbCharacterControllerSetup, m_controllerCinfo) == 0x20);
}
