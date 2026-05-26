#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiTransformData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTransformData };
		static constexpr auto VTABLE{ VTABLE::NiTransformData };
	};
}
