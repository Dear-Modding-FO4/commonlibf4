#pragma once

#include "RE/I/ImageSpaceEffect.h"

namespace RE
{
	class __declspec(novtable) ImageSpaceEffectUpsampleDynamicResolution : public ImageSpaceEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceEffectUpsampleDynamicResolution };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceEffectUpsampleDynamicResolution };
	};
}
