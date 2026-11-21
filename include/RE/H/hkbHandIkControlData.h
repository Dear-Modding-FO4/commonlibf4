#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkbHandle;

	class hkbHandIkControlData
	{
	public:

		enum class HandleChangeMode : std::uint8_t
		{
			kHandleChangeModeAbrupt = 0,
			kHandleChangeModeConstantVelocity = 1
		};

		// members
		hkVector4f m_targetPosition;     // 0x00
		hkQuaternionf m_targetRotation;  // 0x10
		hkVector4f m_targetNormal;       // 0x20
		hkbHandle* m_targetHandle;       // 0x30
		float m_transformOnFraction;     // 0x38
		float m_normalOnFraction;        // 0x3C
		float m_fadeInDuration;          // 0x40
		float m_fadeOutDuration;         // 0x44
		float m_extrapolationTimeStep;   // 0x48
		float m_handleChangeSpeed;       // 0x4C
		hkEnum<HandleChangeMode, std::int8_t> m_handleChangeMode;  // 0x50
		bool m_fixUp;                    // 0x51
	};
	static_assert(sizeof(hkbHandIkControlData) == 0x60);
	static_assert(offsetof(hkbHandIkControlData, m_targetPosition) == 0x0);
	static_assert(offsetof(hkbHandIkControlData, m_targetRotation) == 0x10);
	static_assert(offsetof(hkbHandIkControlData, m_targetNormal) == 0x20);
	static_assert(offsetof(hkbHandIkControlData, m_targetHandle) == 0x30);
	static_assert(offsetof(hkbHandIkControlData, m_transformOnFraction) == 0x38);
	static_assert(offsetof(hkbHandIkControlData, m_normalOnFraction) == 0x3C);
	static_assert(offsetof(hkbHandIkControlData, m_fadeInDuration) == 0x40);
	static_assert(offsetof(hkbHandIkControlData, m_fadeOutDuration) == 0x44);
	static_assert(offsetof(hkbHandIkControlData, m_extrapolationTimeStep) == 0x48);
	static_assert(offsetof(hkbHandIkControlData, m_handleChangeSpeed) == 0x4C);
	static_assert(offsetof(hkbHandIkControlData, m_handleChangeMode) == 0x50);
	static_assert(offsetof(hkbHandIkControlData, m_fixUp) == 0x51);
}
