#pragma once

#include "RE/B/BSShadowLight.h"

namespace RE
{
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

		void Render(std::uint32_t a_mask)
		{
			using func_t = decltype(&BSShadowParabolicLight::Render);
			static REL::Relocation<func_t> func{ ID::BSShadowParabolicLight::Render };
			func(this, a_mask);
		}
	};
	static_assert(sizeof(BSShadowParabolicLight) == 0x200);
	static_assert(offsetof(BSShadowParabolicLight, shadowMapCount) == 0x190);
	static_assert(offsetof(BSShadowParabolicLight, shadowMapData) == 0x198);
}
