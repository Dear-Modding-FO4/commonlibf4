#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiSequence : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSequence };
		static constexpr auto VTABLE{ VTABLE::NiSequence };
	};
}
