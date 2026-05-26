#pragma once

#include "RE/B/BSTriShape.h"

namespace RE
{
	class __declspec(novtable) BSInstanceTriShape : public BSTriShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSInstanceTriShape };
		static constexpr auto VTABLE{ VTABLE::BSInstanceTriShape };
	};
}
