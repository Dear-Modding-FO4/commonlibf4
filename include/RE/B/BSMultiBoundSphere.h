#pragma once

#include "RE/B/BSMultiBoundShape.h"

namespace RE
{
	class __declspec(novtable) BSMultiBoundSphere : public BSMultiBoundShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiBoundSphere };
		static constexpr auto VTABLE{ VTABLE::BSMultiBoundSphere };
	};
}
