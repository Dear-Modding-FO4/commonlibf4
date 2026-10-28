#pragma once

#include "RE/B/BSShaderProperty.h"
#include "RE/N/NiColor.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTexture.h"

namespace RE
{
	class __declspec(novtable) BSSkyShaderProperty : public BSShaderProperty
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSkyShaderProperty };
		static constexpr auto VTABLE{ VTABLE::BSSkyShaderProperty };
		static constexpr auto Ni_RTTI{ Ni_RTTI::BSSkyShaderProperty };

		// members
		NiColorA             kBlendColor;           // 70 - alpha is the object's fade
		NiPointer<NiTexture> textures[3];           // 80
		std::uint8_t         pad98[0x08];           // 98
		float                fadeValue;             // A0
		std::uint16_t        starsIndex;            // A4
		bool                 isFirstTextureSpecial; // A6
		std::uint32_t        skyObjectType;         // A8
	};
	static_assert(sizeof(BSSkyShaderProperty) == 0xB0);
	static_assert(offsetof(BSSkyShaderProperty, kBlendColor) == 0x70);
	static_assert(offsetof(BSSkyShaderProperty, skyObjectType) == 0xA8);
}
