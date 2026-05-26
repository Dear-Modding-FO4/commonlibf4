#pragma once

#include "RE/N/NiIntegerExtraData.h"

namespace RE
{
	class __declspec(novtable) BSXFlags : public NiIntegerExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSXFlags };
		static constexpr auto VTABLE{ VTABLE::BSXFlags };
	};
}
