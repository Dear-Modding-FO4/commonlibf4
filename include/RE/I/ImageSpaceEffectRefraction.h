#pragma once

#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class __declspec(novtable) ImageSpaceEffectRefraction : public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectRefraction };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectRefraction };
	};
}
