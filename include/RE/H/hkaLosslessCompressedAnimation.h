#pragma once

#include "RE/H/hkaAnimation.h"

namespace RE
{
	class __declspec(novtable) hkaLosslessCompressedAnimation : public hkaAnimation
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaLosslessCompressedAnimation };
		static constexpr auto VTABLE{ VTABLE::hkaLosslessCompressedAnimation };
	};
}
