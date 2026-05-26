#pragma once

#include "RE/B/BSMultiIndexTriShape.h"

namespace RE
{
	class __declspec(novtable) BSLODMultiIndexTriShape : public BSMultiIndexTriShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLODMultiIndexTriShape };
		static constexpr auto VTABLE{ VTABLE::BSLODMultiIndexTriShape };
	};
}
