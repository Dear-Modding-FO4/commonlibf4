#pragma once

#include "RE/B/BSTriShape.h"

namespace RE
{
	class __declspec(novtable) BSSubIndexTriShape : public BSTriShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSubIndexTriShape };
		static constexpr auto VTABLE{ VTABLE::BSSubIndexTriShape };
	};
}
