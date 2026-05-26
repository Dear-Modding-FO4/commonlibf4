#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) BSReference : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::BSReference };
		static constexpr auto VTABLE{ VTABLE::BSReference };
	};
}
