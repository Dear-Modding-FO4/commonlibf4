#pragma once

#include "RE/H/hkbEventPayload.h"

namespace RE
{
	class __declspec(novtable) hkbCameraShakeEventPayload :
		public hkbEventPayload  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCameraShakeEventPayload };
		inline static constexpr auto VTABLE{ VTABLE::hkbCameraShakeEventPayload };

		// members
		float m_amplitude;  // 0x10
		float m_halfLife;   // 0x14
	};
	static_assert(sizeof(hkbCameraShakeEventPayload) == 0x18);
	static_assert(offsetof(hkbCameraShakeEventPayload, m_amplitude) == 0x10);
	static_assert(offsetof(hkbCameraShakeEventPayload, m_halfLife) == 0x14);
}
