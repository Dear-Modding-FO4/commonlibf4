#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSShaderMaterial.h"
#include "RE/N/NiColor.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexture.h"

namespace RE
{
	class __declspec(novtable) BSEffectShaderMaterial : public BSShaderMaterial
	{
	public:
		static constexpr auto RTTI{ RTTI::BSEffectShaderMaterial };
		static constexpr auto VTABLE{ VTABLE::BSEffectShaderMaterial };

		BSEffectShaderMaterial() = delete;

		float                falloffData[4];                         // 38
		NiColorA             baseColor;                              // 48
		NiPointer<NiTexture> baseTexture;                            // 58
		NiPointer<NiTexture> greyscaleTexture;                       // 60
		NiPointer<NiTexture> environmentTexture;                     // 68
		NiPointer<NiTexture> environmentMaskTexture;                 // 70
		NiPointer<NiTexture> texture78;                              // 78
		float                softFalloffDepth;                       // 80
		float                baseColorScale;                         // 84
		BSFixedString        sourceTexturePath;                      // 88
		BSFixedString        greyscaleTexturePath;                   // 90
		BSFixedString        environmentTexturePath;                 // 98
		BSFixedString        environmentMaskTexturePath;             // A0
		BSFixedString        texturePathA8;                          // A8
		float                environmentMaskScaleOrRefractionPower;  // B0
		std::uint8_t         textureAddressing;                      // B4 - enum is unestablished
		std::uint8_t         lightingInfluence;                      // B5
		std::uint8_t         environmentMinLOD;                      // B6
		std::byte            unkB7;                                  // B7
	};
	static_assert(sizeof(BSEffectShaderMaterial) == 0xB8);
	static_assert(offsetof(BSEffectShaderMaterial, falloffData) == 0x38);
	static_assert(offsetof(BSEffectShaderMaterial, baseColor) == 0x48);
	static_assert(offsetof(BSEffectShaderMaterial, baseTexture) == 0x58);
	static_assert(offsetof(BSEffectShaderMaterial, greyscaleTexture) == 0x60);
	static_assert(offsetof(BSEffectShaderMaterial, environmentTexture) == 0x68);
	static_assert(offsetof(BSEffectShaderMaterial, environmentMaskTexture) == 0x70);
	static_assert(offsetof(BSEffectShaderMaterial, texture78) == 0x78);
	static_assert(offsetof(BSEffectShaderMaterial, softFalloffDepth) == 0x80);
	static_assert(offsetof(BSEffectShaderMaterial, baseColorScale) == 0x84);
	static_assert(offsetof(BSEffectShaderMaterial, sourceTexturePath) == 0x88);
	static_assert(offsetof(BSEffectShaderMaterial, greyscaleTexturePath) == 0x90);
	static_assert(offsetof(BSEffectShaderMaterial, environmentTexturePath) == 0x98);
	static_assert(offsetof(BSEffectShaderMaterial, environmentMaskTexturePath) == 0xA0);
	static_assert(offsetof(BSEffectShaderMaterial, texturePathA8) == 0xA8);
	static_assert(offsetof(BSEffectShaderMaterial, environmentMaskScaleOrRefractionPower) == 0xB0);
	static_assert(offsetof(BSEffectShaderMaterial, textureAddressing) == 0xB4);
	static_assert(offsetof(BSEffectShaderMaterial, lightingInfluence) == 0xB5);
	static_assert(offsetof(BSEffectShaderMaterial, environmentMinLOD) == 0xB6);
}
