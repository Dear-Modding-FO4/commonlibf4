#pragma once

#include "RE/B/BSTriShape.h"

namespace RE
{
	class __declspec(novtable) BSMultiIndexTriShape : public BSTriShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiIndexTriShape };
		static constexpr auto VTABLE{ VTABLE::BSMultiIndexTriShape };
	};
}
