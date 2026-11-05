#pragma once

#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class __declspec(novtable) ImageSpaceEffectScalableAmbientObscuranceCS :
	    public ImageSpaceEffect  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectScalableAmbientObscuranceCS };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectScalableAmbientObscuranceCS };

		~ImageSpaceEffectScalableAmbientObscuranceCS() override;  // 00

		// members
		float         projInfos[4];                // 0B0
		float         ssaoInfos[4];                // 0C0
		float         screenInfos[4];              // 0D0
		float         dynamicResolutionRatios[4];  // 0E0
		float         clipInfos[4];                // 0F0
		float         blurScreenInfos[4];          // 100
		std::uint32_t bufferIndex;                 // 110
		bool          editorMode;                  // 114
		std::byte     unk115[0x3];                 // 115
		float         previousWidthRatio;          // 118
		float         previousHeightRatio;         // 11C
		bool          saoEnabled;                  // 120
		bool          saoToggleState;              // 121
	};
	static_assert(offsetof(ImageSpaceEffectScalableAmbientObscuranceCS, isActive) == 0x08);
	static_assert(offsetof(ImageSpaceEffectScalableAmbientObscuranceCS, bufferIndex) == 0x110);
	static_assert(offsetof(ImageSpaceEffectScalableAmbientObscuranceCS, saoEnabled) == 0x120);
	static_assert(offsetof(ImageSpaceEffectScalableAmbientObscuranceCS, saoToggleState) == 0x121);
	static_assert(sizeof(ImageSpaceEffectScalableAmbientObscuranceCS) == 0x128);
}
