#pragma once

#include "RE/N/NiPSysCollider.h"

namespace RE
{
	class __declspec(novtable) NiPSysPlanarCollider : public NiPSysCollider
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysPlanarCollider };
		static constexpr auto VTABLE{ VTABLE::NiPSysPlanarCollider };
	};
}
