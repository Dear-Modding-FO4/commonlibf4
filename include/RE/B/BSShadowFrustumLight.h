#pragma once

#include "RE/B/BSShadowLight.h"

#include "REX/CAST.h"

namespace RE
{
	// Mapped prefix; the complete allocation extent is not established.
	class __declspec(novtable) BSShadowFrustumLight : public BSShadowLight
	{
	public:
		static constexpr auto RTTI{ RTTI::BSShadowFrustumLight };
		static constexpr auto VTABLE{ VTABLE::BSShadowFrustumLight };

		bool UpdateCamerasI(NiCamera* a_camera)
		{
			using func_t = decltype(&BSShadowFrustumLight::UpdateCamerasI);
			static REL::Relocation<func_t> func{ ID::BSShadowFrustumLight::UpdateCamerasI };
			return func(this, a_camera);
		}

		[[nodiscard]] float& GetNearClip() noexcept
		{
			return *REX::ADJUST_POINTER<float>(this, 0x200);
		}

		[[nodiscard]] float& GetFarClipOverride() noexcept
		{
			return *REX::ADJUST_POINTER<float>(this, 0x204);
		}
	};
	static_assert(offsetof(BSShadowFrustumLight, shadowMapCount) == 0x190);
	static_assert(offsetof(BSShadowFrustumLight, shadowMapData) == 0x198);
}
