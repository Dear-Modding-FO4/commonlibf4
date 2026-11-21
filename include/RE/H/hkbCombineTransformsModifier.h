#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"

namespace RE
{
	class __declspec(novtable) hkbCombineTransformsModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCombineTransformsModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbCombineTransformsModifier };

		// members
		std::uint8_t unk58[0x8];        // 0x58
		hkVector4f m_translationOut;    // 0x60
		hkQuaternionf m_rotationOut;    // 0x70
		hkVector4f m_leftTranslation;   // 0x80
		hkQuaternionf m_leftRotation;   // 0x90
		hkVector4f m_rightTranslation;  // 0xA0
		hkQuaternionf m_rightRotation;  // 0xB0
		bool m_invertLeftTransform;     // 0xC0
		bool m_invertRightTransform;    // 0xC1
		bool m_invertResult;            // 0xC2
	};
	static_assert(sizeof(hkbCombineTransformsModifier) == 0xD0);
	static_assert(offsetof(hkbCombineTransformsModifier, m_translationOut) == 0x60);
	static_assert(offsetof(hkbCombineTransformsModifier, m_rotationOut) == 0x70);
	static_assert(offsetof(hkbCombineTransformsModifier, m_leftTranslation) == 0x80);
	static_assert(offsetof(hkbCombineTransformsModifier, m_leftRotation) == 0x90);
	static_assert(offsetof(hkbCombineTransformsModifier, m_rightTranslation) == 0xA0);
	static_assert(offsetof(hkbCombineTransformsModifier, m_rightRotation) == 0xB0);
	static_assert(offsetof(hkbCombineTransformsModifier, m_invertLeftTransform) == 0xC0);
	static_assert(offsetof(hkbCombineTransformsModifier, m_invertRightTransform) == 0xC1);
	static_assert(offsetof(hkbCombineTransformsModifier, m_invertResult) == 0xC2);
}
