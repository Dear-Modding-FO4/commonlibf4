#pragma once

#include "RE/N/NiInterpolator.h"

namespace RE
{
	class __declspec(novtable) NiBlendInterpolator : public NiInterpolator
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBlendInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiBlendInterpolator };
	};
}
