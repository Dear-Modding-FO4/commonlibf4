#pragma once

#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class __declspec(novtable) ImageSpaceEffectNoise : public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectNoise };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectNoise };
	};
}
