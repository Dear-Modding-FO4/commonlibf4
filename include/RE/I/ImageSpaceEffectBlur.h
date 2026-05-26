#pragma once

#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class __declspec(novtable) ImageSpaceEffectBlur : public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectBlur };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectBlur };
	};
}
