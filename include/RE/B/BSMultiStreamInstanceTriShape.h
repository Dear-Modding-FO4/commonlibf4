#pragma once

#include "RE/B/BSInstanceTriShape.h"

namespace RE
{
	class __declspec(novtable) BSMultiStreamInstanceTriShape : public BSInstanceTriShape
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiStreamInstanceTriShape };
		static constexpr auto VTABLE{ VTABLE::BSMultiStreamInstanceTriShape };
	};
}
