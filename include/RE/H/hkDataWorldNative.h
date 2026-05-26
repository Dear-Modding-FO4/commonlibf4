#pragma once

#include "RE/H/hkDataWorld.h"

namespace RE
{
	class __declspec(novtable) hkDataWorldNative : public hkDataWorld
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataWorldNative };
		static constexpr auto VTABLE{ VTABLE::hkDataWorldNative };
	};
}
