#pragma once

#include "RE/B/BSShadowLight.h"

#include "REX/CAST.h"

namespace RE
{
	// Mapped prefix; the complete allocation extent is not established.
	class __declspec(novtable) BSShadowDirectionalLight : public BSShadowLight
	{
	public:
		static constexpr auto RTTI{ RTTI::BSShadowDirectionalLight };
		static constexpr auto VTABLE{ VTABLE::BSShadowDirectionalLight };

		[[nodiscard]] static float& GetCachedSunAngularThresholdCosine()
		{
			static REL::Relocation<float*> value{ ID::BSShadowDirectionalLight::CachedSunAngularThresholdCosine };
			return *value;
		}

		struct FitBounds
		{
			NiPoint3 minimum;
			NiPoint3 maximum;
		};
		static_assert(sizeof(FitBounds) == 0x18);
		static_assert(offsetof(FitBounds, maximum) == 0xC);

		bool UpdateCamerasI(NiCamera* a_camera)
		{
			using func_t = decltype(&BSShadowDirectionalLight::UpdateCamerasI);
			static REL::Relocation<func_t> func{ ID::BSShadowDirectionalLight::UpdateCamerasI };
			return func(this, a_camera);
		}

		[[nodiscard]] std::span<FitBounds> GetFitBounds() noexcept
		{
			// The fitter indexes +260 by map count; total storage is unverified.
			return { REX::ADJUST_POINTER<FitBounds>(this, 0x260), shadowMapCount };
		}

		[[nodiscard]] std::span<const FitBounds> GetFitBounds() const noexcept
		{
			return { REX::ADJUST_POINTER<FitBounds>(this, 0x260), shadowMapCount };
		}

		// members
		NiPoint3  acceptedDirection;      // 200
		std::byte unk20C[0x4];            // 20C
		NiPoint3  priorDirection;         // 210
		std::byte unk21C[0x4];            // 21C
		float     interpolationProgress;  // 220
		std::byte unk224[0x2C];           // 224 - unverified cascade state
		float     splitDistances[4];      // 250
	};
	static_assert(offsetof(BSShadowDirectionalLight, shadowMapCount) == 0x190);
	static_assert(offsetof(BSShadowDirectionalLight, shadowMapData) == 0x198);
	static_assert(offsetof(BSShadowDirectionalLight, acceptedDirection) == 0x200);
	static_assert(offsetof(BSShadowDirectionalLight, priorDirection) == 0x210);
	static_assert(offsetof(BSShadowDirectionalLight, interpolationProgress) == 0x220);
	static_assert(offsetof(BSShadowDirectionalLight, splitDistances) == 0x250);
}
