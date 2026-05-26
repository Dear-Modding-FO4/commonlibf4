#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) NiPSysCollider : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysCollider };
		static constexpr auto VTABLE{ VTABLE::NiPSysCollider };
	};
}
