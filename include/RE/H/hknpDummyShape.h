#pragma once

#include "RE/H/hknpShape.h"

namespace RE
{
	class __declspec(novtable) hknpDummyShape : public hknpShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpDummyShape };
		static constexpr auto VTABLE{ VTABLE::hknpDummyShape };
	};
}
