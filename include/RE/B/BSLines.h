#pragma once

#include "RE/B/BSGeometry.h"

namespace RE
{
	class __declspec(novtable) BSLines : public BSGeometry
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLines };
		static constexpr auto VTABLE{ VTABLE::BSLines };
	};
}
