#pragma once

#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class __declspec(novtable) ImageSpaceEffectMap : public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectMap };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectMap };
	};
}
