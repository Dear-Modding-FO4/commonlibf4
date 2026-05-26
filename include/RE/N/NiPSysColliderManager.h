#pragma once

#include "RE/N/NiPSysModifier.h"

namespace RE
{
	class __declspec(novtable) NiPSysColliderManager : public NiPSysModifier
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysColliderManager };
		static constexpr auto VTABLE{ VTABLE::NiPSysColliderManager };
	};
}
