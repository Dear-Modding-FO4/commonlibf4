#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) BSDistantObjectInstanceDataBlock : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDistantObjectInstanceDataBlock };
		static constexpr auto VTABLE{ VTABLE::BSDistantObjectInstanceDataBlock };
	};
}
