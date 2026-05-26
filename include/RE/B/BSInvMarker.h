#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSInvMarker : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSInvMarker };
		static constexpr auto VTABLE{ VTABLE::BSInvMarker };
	};
}
