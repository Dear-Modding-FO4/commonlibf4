#pragma once

#include "RE/B/BSMultiBoundAABB.h"

namespace RE
{
	class __declspec(novtable) BSMultiBoundOBB : public BSMultiBoundAABB
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiBoundOBB };
		static constexpr auto VTABLE{ VTABLE::BSMultiBoundOBB };
	};
}
