#pragma once

#include "RE/H/HeldStateHandler.h"

namespace RE
{
	class __declspec(novtable) TogglePOVHandler : public HeldStateHandler
	{
	public:
		static constexpr auto RTTI{ RTTI::TogglePOVHandler };
		static constexpr auto VTABLE{ VTABLE::TogglePOVHandler };
	};
}
