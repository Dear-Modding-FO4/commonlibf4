#pragma once

#include "RE/B/BSShadowLight.h"
#include "RE/N/NiCamera.h"

namespace RE
{
	class BSGeometryListCullingProcess;

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

		void Render(std::uint32_t a_mask)
		{
			using func_t = decltype(&BSShadowDirectionalLight::Render);
			static REL::Relocation<func_t> func{ ID::BSShadowDirectionalLight::Render };
			func(this, a_mask);
		}

		[[nodiscard]] std::span<FitBounds> GetFitBounds() noexcept
		{
			return { fitBounds, shadowMapCount };
		}

		[[nodiscard]] std::span<const FitBounds> GetFitBounds() const noexcept
		{
			return { fitBounds, shadowMapCount };
		}

		// members
		NiPoint3                      acceptedDirection;      // 200
		std::byte                     unk20C[0x4];            // 20C
		NiPoint3                      priorDirection;         // 210
		std::byte                     unk21C[0x4];            // 21C
		float                         interpolationProgress;  // 220
		std::byte                     unk224[0x2C];           // 224
		float                         splitDistances[4];      // 250
		FitBounds                     fitBounds[4];           // 260
		NiPointer<NiCamera>           shadowCamera;           // 2C0
		BSGeometryListCullingProcess* cullingProcess;         // 2C8
		std::byte                     unk2D0[0x10];           // 2D0
	};
	static_assert(sizeof(BSShadowDirectionalLight) == 0x2E0);
	static_assert(offsetof(BSShadowDirectionalLight, shadowMapCount) == 0x190);
	static_assert(offsetof(BSShadowDirectionalLight, shadowMapData) == 0x198);
	static_assert(offsetof(BSShadowDirectionalLight, acceptedDirection) == 0x200);
	static_assert(offsetof(BSShadowDirectionalLight, priorDirection) == 0x210);
	static_assert(offsetof(BSShadowDirectionalLight, interpolationProgress) == 0x220);
	static_assert(offsetof(BSShadowDirectionalLight, splitDistances) == 0x250);
	static_assert(offsetof(BSShadowDirectionalLight, fitBounds) == 0x260);
	static_assert(offsetof(BSShadowDirectionalLight, shadowCamera) == 0x2C0);
	static_assert(offsetof(BSShadowDirectionalLight, cullingProcess) == 0x2C8);
}
