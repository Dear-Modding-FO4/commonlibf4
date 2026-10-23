#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSGraphics.h"
#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/N/NiAlphaProperty.h"
#include "RE/N/NiColor.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexture.h"

namespace RE
{
	class BSEffectShaderData :
	    public BSIntrusiveRefCounted  // 00
	{
	public:
		using NodeFilterFunction_t = bool(const BSFixedString*);

		// members
		std::byte                         unk04[0x4];               // 04
		NodeFilterFunction_t*             nodeFilterFunction;       // 08
		NiPointer<NiTexture>              shaderTexture;            // 10
		NiPointer<NiTexture>              paletteTexture;           // 18
		NiPointer<NiTexture>              blockOutTexture;          // 20
		BSGraphics::TextureAddressMode    textureClampMode;         // 28
		NiColorA                          fillColor;                // 2C
		NiColorA                          rimColor;                 // 3C
		float                             baseFillScale;            // 4C
		float                             baseFillAlpha;            // 50
		float                             baseRimAlpha;             // 54
		float                             uOffset;                  // 58
		float                             vOffset;                  // 5C
		float                             uScale;                   // 60
		float                             vScale;                   // 64
		float                             edgeExponent;             // 68
		float                             boundDiameter;            // 6C
		NiAlphaProperty::AlphaFunction    srcBlend;                 // 70
		NiAlphaProperty::AlphaFunction    destBlend;                // 74
		BSGraphics::DepthStencilDepthMode zTestFunc;                // 78
		std::uint8_t                      alphaTestRef;             // 7C
		bool                              grayscaleToColor;         // 7D
		bool                              grayscaleToAlpha;         // 7E
		bool                              ignoreTextureAlpha;       // 7F
		bool                              baseTextureProjectedUVs;  // 80
		bool                              ignoreBaseGeomTexAlpha;   // 81
		bool                              lighting;                 // 82
		bool                              alpha;                    // 83
		std::byte                         unk84[0x4];               // 84
	};
	static_assert(offsetof(BSEffectShaderData, nodeFilterFunction) == 0x8);
	static_assert(offsetof(BSEffectShaderData, shaderTexture) == 0x10);
	static_assert(offsetof(BSEffectShaderData, blockOutTexture) == 0x20);
	static_assert(offsetof(BSEffectShaderData, textureClampMode) == 0x28);
	static_assert(offsetof(BSEffectShaderData, fillColor) == 0x2C);
	static_assert(offsetof(BSEffectShaderData, rimColor) == 0x3C);
	static_assert(offsetof(BSEffectShaderData, baseFillScale) == 0x4C);
	static_assert(offsetof(BSEffectShaderData, uOffset) == 0x58);
	static_assert(offsetof(BSEffectShaderData, srcBlend) == 0x70);
	static_assert(offsetof(BSEffectShaderData, alphaTestRef) == 0x7C);
	static_assert(offsetof(BSEffectShaderData, alpha) == 0x83);
	static_assert(sizeof(BSEffectShaderData) == 0x88);
}
