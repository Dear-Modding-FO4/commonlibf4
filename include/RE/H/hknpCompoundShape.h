#pragma once

#include "RE/H/hknpCompositeShape.h"

namespace RE
{
	class __declspec(novtable) hknpCompoundShape : public hknpCompositeShape
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpCompoundShape };
		static constexpr auto VTABLE{ VTABLE::hknpCompoundShape };
	};
}
