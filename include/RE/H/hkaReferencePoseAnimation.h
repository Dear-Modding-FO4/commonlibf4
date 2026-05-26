#pragma once

#include "RE/H/hkaAnimation.h"

namespace RE
{
	class __declspec(novtable) hkaReferencePoseAnimation : public hkaAnimation
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaReferencePoseAnimation };
		static constexpr auto VTABLE{ VTABLE::hkaReferencePoseAnimation };
	};
}
