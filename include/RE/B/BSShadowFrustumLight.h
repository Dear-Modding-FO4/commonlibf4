#pragma once

#include "RE/B/BSShadowLight.h"

namespace RE
{
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
			return nearClip;
		}

		[[nodiscard]] float& GetFarClipOverride() noexcept
		{
			return farClipOverride;
		}

		void Render(std::uint32_t a_mask)
		{
			using func_t = decltype(&BSShadowFrustumLight::Render);
			static REL::Relocation<func_t> func{ ID::BSShadowFrustumLight::Render };
			func(this, a_mask);
		}

		// members
		float     nearClip;         // 200
		float     farClipOverride;  // 204
		std::byte unk208[0x8];      // 208
	};
	static_assert(sizeof(BSShadowFrustumLight) == 0x210);
	static_assert(offsetof(BSShadowFrustumLight, shadowMapCount) == 0x190);
	static_assert(offsetof(BSShadowFrustumLight, shadowMapData) == 0x198);
	static_assert(offsetof(BSShadowFrustumLight, nearClip) == 0x200);
	static_assert(offsetof(BSShadowFrustumLight, farClipOverride) == 0x204);
}
