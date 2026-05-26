#pragma once

#include "RE/H/HeldStateHandler.h"

namespace RE
{
	class __declspec(novtable) ActivateHandler : public HeldStateHandler
	{
	public:
		static constexpr auto RTTI{ RTTI::ActivateHandler };
		static constexpr auto VTABLE{ VTABLE::ActivateHandler };
	};
}
