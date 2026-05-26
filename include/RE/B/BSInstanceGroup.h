#pragma once

#include "RE/B/BSGeometry.h"

namespace RE
{
	class __declspec(novtable) BSInstanceGroup : public BSGeometry
	{
	public:
		static constexpr auto RTTI{ RTTI::BSInstanceGroup };
		static constexpr auto VTABLE{ VTABLE::BSInstanceGroup };
	};
}
