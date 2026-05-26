#pragma once

#include "RE/N/NiStream.h"

namespace RE
{
	class __declspec(novtable) BSStream : public NiStream
	{
	public:
		static constexpr auto RTTI{ RTTI::BSStream };
		static constexpr auto VTABLE{ VTABLE::BSStream };
	};
}
