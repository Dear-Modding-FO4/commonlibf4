#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkLocalFrame;
	class hkReferencedObject;
	class hkbCharacter;

	class __declspec(novtable) hkbHandle :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbHandle };
		inline static constexpr auto VTABLE{ VTABLE::hkbHandle };

		// members
		hkLocalFrame* m_frame;              // 0x10
		hkReferencedObject* m_rigidBody;    // 0x18
		hkbCharacter* m_character;          // 0x20
		std::int16_t m_animationBoneIndex;  // 0x28
	};
	static_assert(sizeof(hkbHandle) == 0x30);
	static_assert(offsetof(hkbHandle, m_frame) == 0x10);
	static_assert(offsetof(hkbHandle, m_rigidBody) == 0x18);
	static_assert(offsetof(hkbHandle, m_character) == 0x20);
	static_assert(offsetof(hkbHandle, m_animationBoneIndex) == 0x28);
}
