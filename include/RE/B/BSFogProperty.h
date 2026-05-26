#pragma once

#include "RE/N/NiFogProperty.h"

namespace RE
{
	class __declspec(novtable) BSFogProperty : public NiFogProperty
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFogProperty };
		static constexpr auto VTABLE{ VTABLE::BSFogProperty };
	};
}
