#pragma once

#include "RE/B/BSISoundDescriptor.h"

namespace RE
{
	class __declspec(novtable) BGSSoundDescriptor : public BSISoundDescriptor
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSSoundDescriptor };
		static constexpr auto VTABLE{ VTABLE::BGSSoundDescriptor };
	};
}
