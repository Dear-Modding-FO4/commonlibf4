#pragma once

#include "RE/B/BSTriShape.h"

namespace RE
{
	class __declspec(novtable) BSDynamicTriShape : public BSTriShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDynamicTriShape };
		static constexpr auto VTABLE{ VTABLE::BSDynamicTriShape };
	};
}
