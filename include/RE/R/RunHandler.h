#pragma once

#include "RE/H/HeldStateHandler.h"

namespace RE
{
	class __declspec(novtable) RunHandler : public HeldStateHandler
	{
	public:
		static constexpr auto RTTI{ RTTI::RunHandler };
		static constexpr auto VTABLE{ VTABLE::RunHandler };
	};
}
