#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbTransformVectorModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbTransformVectorModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbTransformVectorModifier };

		// members
		std::uint8_t unk58[0x8];   // 0x58
		hkQuaternionf m_rotation;  // 0x60
		hkVector4f m_translation;  // 0x70
		hkVector4f m_vectorIn;     // 0x80
		hkVector4f m_vectorOut;    // 0x90
		bool m_rotateOnly;         // 0xA0
		bool m_inverse;            // 0xA1
		bool m_computeOnActivate;  // 0xA2
		bool m_computeOnModify;    // 0xA3
	};
	static_assert(sizeof(hkbTransformVectorModifier) == 0xB0);
	static_assert(offsetof(hkbTransformVectorModifier, m_rotation) == 0x60);
	static_assert(offsetof(hkbTransformVectorModifier, m_translation) == 0x70);
	static_assert(offsetof(hkbTransformVectorModifier, m_vectorIn) == 0x80);
	static_assert(offsetof(hkbTransformVectorModifier, m_vectorOut) == 0x90);
	static_assert(offsetof(hkbTransformVectorModifier, m_rotateOnly) == 0xA0);
	static_assert(offsetof(hkbTransformVectorModifier, m_inverse) == 0xA1);
	static_assert(offsetof(hkbTransformVectorModifier, m_computeOnActivate) == 0xA2);
	static_assert(offsetof(hkbTransformVectorModifier, m_computeOnModify) == 0xA3);
}
