#pragma once

#include "RE/B/BSTriShape.h"

namespace RE
{
	class __declspec(novtable) BSMergeInstancedTriShape : public BSTriShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMergeInstancedTriShape };
		static constexpr auto VTABLE{ VTABLE::BSMergeInstancedTriShape };
	};
}
