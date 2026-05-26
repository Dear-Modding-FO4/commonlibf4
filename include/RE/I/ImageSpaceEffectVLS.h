#pragma once

#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class __declspec(novtable) ImageSpaceEffectVLS : public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectVLS };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectVLS };
	};
}
