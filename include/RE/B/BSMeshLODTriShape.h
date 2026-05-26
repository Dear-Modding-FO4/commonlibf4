#pragma once

#include "RE/B/BSTriShape.h"

namespace RE
{
	class __declspec(novtable) BSMeshLODTriShape : public BSTriShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMeshLODTriShape };
		static constexpr auto VTABLE{ VTABLE::BSMeshLODTriShape };
	};
}
