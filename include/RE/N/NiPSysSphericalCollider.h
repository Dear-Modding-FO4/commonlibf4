#pragma once

#include "RE/N/NiPSysCollider.h"

namespace RE
{
	class __declspec(novtable) NiPSysSphericalCollider : public NiPSysCollider
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysSphericalCollider };
		static constexpr auto VTABLE{ VTABLE::NiPSysSphericalCollider };
	};
}
