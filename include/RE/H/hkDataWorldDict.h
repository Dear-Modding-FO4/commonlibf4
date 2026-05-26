#pragma once

#include "RE/H/hkDataWorld.h"

namespace RE
{
	class __declspec(novtable) hkDataWorldDict : public hkDataWorld
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataWorldDict };
		static constexpr auto VTABLE{ VTABLE::hkDataWorldDict };
	};
}
