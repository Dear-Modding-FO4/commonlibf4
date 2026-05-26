#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) TelekinesisEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::TelekinesisEffect };
		static constexpr auto VTABLE{ VTABLE::TelekinesisEffect };
	};
}
