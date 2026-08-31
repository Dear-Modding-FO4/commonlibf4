#pragma once

#include "RE/N/NiPointer.h"

namespace RE
{
	class BSGeometry;
	class BSInstanceGroupPass;
	class BSLight;
	class BSShader;
	class BSShaderProperty;

	namespace NVFlex
	{
		class DebrisInstanceGroupPass;
	}

	class BSRenderPass
	{
	private:
		BSRenderPass() = delete;
		BSRenderPass(const BSRenderPass&) = delete;
		BSRenderPass(BSRenderPass&&) = delete;
		~BSRenderPass() = delete;

		BSRenderPass& operator=(const BSRenderPass&) = delete;
		BSRenderPass& operator=(BSRenderPass&&) = delete;

	public:
		[[nodiscard]] BSShaderProperty*       GetShaderProperty() noexcept { return shaderProperty; }
		[[nodiscard]] const BSShaderProperty* GetShaderProperty() const noexcept { return shaderProperty; }

		[[nodiscard]] BSGeometry*       GetGeometry() noexcept { return geometry; }
		[[nodiscard]] const BSGeometry* GetGeometry() const noexcept { return geometry; }

		// members
		std::byte*                                 commandBuffer;            // 00
		BSShader*                                  shader;                   // 08
		BSShaderProperty*                          shaderProperty;           // 10
		BSGeometry*                                geometry;                 // 18
		BSInstanceGroupPass*                       instanceGroupPass;        // 20
		NiPointer<NVFlex::DebrisInstanceGroupPass> debrisInstanceGroupPass;  // 28
		BSLight**                                  sceneLights;              // 30
		BSRenderPass*                              propertyNext;             // 38, property ownership chain
		BSRenderPass*                              batchNext;                // 40, batch/persistent replay chain
		std::uint32_t                              passEnum;                 // 48
		std::uint8_t                               passType;                 // 4C
		std::uint8_t                               unk4D;                    // 4D
		std::int8_t                                lodMode;                  // 4E
		std::uint8_t                               unk4F;                    // 4F
		std::uint8_t                               numLights;                // 50
		std::byte                                  unk51[7];                 // 51, unknown storage, not padding
	};
	static_assert(sizeof(BSRenderPass) == 0x58);
}
