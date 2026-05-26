#pragma once

#include "RE/N/NiProperty.h"

namespace RE
{
	class __declspec(novtable) NiFogProperty : public NiProperty
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFogProperty };
		static constexpr auto VTABLE{ VTABLE::NiFogProperty };
	};
}
