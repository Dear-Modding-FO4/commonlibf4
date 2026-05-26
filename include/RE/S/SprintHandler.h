#pragma once

#include "RE/H/HeldStateHandler.h"

namespace RE
{
	class __declspec(novtable) SprintHandler : public HeldStateHandler
	{
	public:
		static constexpr auto RTTI{ RTTI::SprintHandler };
		static constexpr auto VTABLE{ VTABLE::SprintHandler };
	};
}
