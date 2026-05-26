#pragma once

#include "RE/H/hkaAnimation.h"

namespace RE
{
	class __declspec(novtable) hkaQuantizedAnimation : public hkaAnimation
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaQuantizedAnimation };
		static constexpr auto VTABLE{ VTABLE::hkaQuantizedAnimation };
	};
}
