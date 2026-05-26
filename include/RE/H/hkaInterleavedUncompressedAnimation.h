#pragma once

#include "RE/H/hkaAnimation.h"

namespace RE
{
	class __declspec(novtable) hkaInterleavedUncompressedAnimation : public hkaAnimation
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaInterleavedUncompressedAnimation };
		static constexpr auto VTABLE{ VTABLE::hkaInterleavedUncompressedAnimation };
	};
}
