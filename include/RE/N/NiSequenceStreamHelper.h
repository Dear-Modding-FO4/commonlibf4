#pragma once

#include "RE/N/NiObjectNET.h"

namespace RE
{
	class __declspec(novtable) NiSequenceStreamHelper : public NiObjectNET
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSequenceStreamHelper };
		static constexpr auto VTABLE{ VTABLE::NiSequenceStreamHelper };
	};
}
