#pragma once

#include "RE/B/BSMultiBoundShape.h"

namespace RE
{
	class __declspec(novtable) BSMultiBoundCapsule : public BSMultiBoundShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiBoundCapsule };
		static constexpr auto VTABLE{ VTABLE::BSMultiBoundCapsule };
	};
}
