#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) BSNodeReferences : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::BSNodeReferences };
		static constexpr auto VTABLE{ VTABLE::BSNodeReferences };
	};
}
