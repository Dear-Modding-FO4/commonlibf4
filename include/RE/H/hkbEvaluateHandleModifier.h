#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbHandle.h"
#include "RE/H/hkbModifier.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbHandle;

	class __declspec(novtable) hkbEvaluateHandleModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbEvaluateHandleModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbEvaluateHandleModifier };

		enum class HandleChangeMode : std::uint8_t
		{
			kHandleChangeModeAbrupt = 0,
			kHandleChangeModeConstantVelocity = 1
		};

		// members
		hkbHandle* m_handle;                // 0x58
		hkVector4f m_handlePositionOut;     // 0x60
		hkQuaternionf m_handleRotationOut;  // 0x70
		bool m_isValidOut;                  // 0x80
		std::uint8_t pad81[0x3];            // 0x81
		float m_extrapolationTimeStep;      // 0x84
		float m_handleChangeSpeed;          // 0x88
		hkEnum<HandleChangeMode, std::int8_t> m_handleChangeMode;     // 0x8C
		std::uint8_t pad8D[0x3];            // 0x8D
		hkbHandle m_oldHandle;              // 0x90
		hkVector4f m_oldHandlePosition;     // 0xC0
		hkQuaternionf m_oldHandleRotation;  // 0xD0
		float m_timeSinceLastModify;        // 0xE0
		bool m_smoothlyChangingHandles;     // 0xE4
	};
	static_assert(sizeof(hkbEvaluateHandleModifier) == 0xF0);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_handle) == 0x58);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_handlePositionOut) == 0x60);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_handleRotationOut) == 0x70);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_isValidOut) == 0x80);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_extrapolationTimeStep) == 0x84);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_handleChangeSpeed) == 0x88);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_handleChangeMode) == 0x8C);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_oldHandle) == 0x90);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_oldHandlePosition) == 0xC0);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_oldHandleRotation) == 0xD0);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_timeSinceLastModify) == 0xE0);
	static_assert(offsetof(hkbEvaluateHandleModifier, m_smoothlyChangingHandles) == 0xE4);
}
