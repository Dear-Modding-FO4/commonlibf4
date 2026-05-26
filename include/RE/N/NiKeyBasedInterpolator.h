#pragma once

#include "RE/N/NiInterpolator.h"

namespace RE
{
	class __declspec(novtable) NiKeyBasedInterpolator : public NiInterpolator
	{
	public:
		static constexpr auto RTTI{ RTTI::NiKeyBasedInterpolator };
		static constexpr auto VTABLE{ VTABLE::NiKeyBasedInterpolator };
	};
}
