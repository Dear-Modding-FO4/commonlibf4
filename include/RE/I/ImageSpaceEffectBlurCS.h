#pragma once

#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class __declspec(novtable) ImageSpaceEffectBlurCS : public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectBlurCS };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectBlurCS };
	};
}
