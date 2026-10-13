#pragma once

#include "RE/B/BSShadowLight.h"

namespace RE
{
	// No derived member layout is established by the shadow reports.
	class __declspec(novtable) BSShadowParabolicLight : public BSShadowLight
	{
	public:
		static constexpr auto RTTI{ RTTI::BSShadowParabolicLight };
		static constexpr auto VTABLE{ VTABLE::BSShadowParabolicLight };

		bool UpdateCamerasI(NiCamera* a_camera)
		{
			using func_t = decltype(&BSShadowParabolicLight::UpdateCamerasI);
			static REL::Relocation<func_t> func{ ID::BSShadowParabolicLight::UpdateCamerasI };
			return func(this, a_camera);
		}
	};
	static_assert(offsetof(BSShadowParabolicLight, shadowMapCount) == 0x190);
	static_assert(offsetof(BSShadowParabolicLight, shadowMapData) == 0x198);
}
