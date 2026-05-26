#pragma once

#include "RE/B/BSInputDevice.h"

namespace RE
{
	class __declspec(novtable) BSGamepadDevice : public BSInputDevice
	{
	public:
		static constexpr auto RTTI{ RTTI::BSGamepadDevice };
		static constexpr auto VTABLE{ VTABLE::BSGamepadDevice };
	};
}
