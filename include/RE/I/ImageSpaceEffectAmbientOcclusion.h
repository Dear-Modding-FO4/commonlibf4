#pragma once

#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class __declspec(novtable) ImageSpaceEffectAmbientOcclusion : public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectAmbientOcclusion };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectAmbientOcclusion };
	};
}
