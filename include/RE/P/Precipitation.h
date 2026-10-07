#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSCullingProcess;
	class BSParticleShaderCubeEmitter;
	class BSGeometry;
	class BSShaderAccumulator;
	class NiCamera;

	class __declspec(novtable) Precipitation
	{
	public:
		static constexpr auto RTTI{ RTTI::Precipitation };
		static constexpr auto VTABLE{ VTABLE::Precipitation };

		struct OcclusionMapData
		{
			OcclusionMapData();

			// members
			std::byte                      field_0x0[0x40];  // 00 - unused
			NiPointer<NiCamera>            camera;           // 40
			NiPointer<BSShaderAccumulator> accumulator;      // 48 - render mode 14
			std::byte                      field_0x50[0x8];  // 50 - unused
			BSCullingProcess*              cullingProcess;   // 58 - owning
		};
		static_assert(sizeof(OcclusionMapData) == 0x60);

		using OcclusionMatrix = float[4][4];

		virtual ~Precipitation();

		static void RenderOcclusionMap()
		{
			using func_t = decltype(&Precipitation::RenderOcclusionMap);
			static REL::Relocation<func_t> func{ ID::Precipitation::RenderOcclusionMap };
			return func();
		}

		void RenderOcclusionMapImpl(BSParticleShaderCubeEmitter* a_emitter)
		{
			using func_t = decltype(&Precipitation::RenderOcclusionMapImpl);
			static REL::Relocation<func_t> func{ ID::Precipitation::RenderOcclusionMapImpl };
			return func(this, a_emitter);
		}

		// Reads the camera's previous world rotation before rewriting it.
		// The callee releases its camera reference on return.
		void ComputeProjection(NiPointer<NiCamera> a_camera)
		{
			using func_t = decltype(&Precipitation::ComputeProjection);
			static REL::Relocation<func_t> func{ ID::Precipitation::ComputeProjection };
			return func(this, a_camera);
		}

		[[nodiscard]] static bool& GetOcclusionEnabled()
		{
			static REL::Relocation<bool*> data{ ID::Precipitation::OcclusionEnabled };
			return *data;
		}

		// Per-weather side length of the occlusion box.
		[[nodiscard]] static float& GetBoxSize()
		{
			static REL::Relocation<float*> data{ ID::Precipitation::BoxSize };
			return *data;
		}

		[[nodiscard]] static NiPoint3& GetDirection()
		{
			static REL::Relocation<NiPoint3*> data{ ID::Precipitation::Direction };
			return *data;
		}

		// Write-only for the engine; its only reader is the emitter copy.
		[[nodiscard]] static OcclusionMatrix& GetOcclusionMatrix()
		{
			static REL::Relocation<OcclusionMatrix*> data{ ID::Precipitation::OcclusionMatrix };
			return *data;
		}

		// members
		std::byte             field_0x8[0x8];              // 08 - unused
		OcclusionMapData      occlusionData;               // 10
		BSFixedString         wetnessEnvMap;               // 70
		std::byte             wetnessEnvMapTexture[0x80 - 0x78];  // 78 - BSResource::RHandleType<...NiTexture...>
		NiPointer<BSGeometry> precipParticleGeometry;      // 80
		NiPointer<BSGeometry> prevPrecipParticleGeometry;  // 88
		float                 precipUpdateValue;           // 90 - constructed 4096.0f
		float                 precipFadeScale;             // 94 - constructed 1.0f
		float                 prevPrecipFade;              // 98 - constructed 1.0f
		float                 prevPrecipOcclusion;         // 9C - constructed 0.0f
	};
	static_assert(sizeof(Precipitation) == 0xA0);
}
