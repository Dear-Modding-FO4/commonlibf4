#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSSplatterExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSSplatterExtraData };
		static constexpr auto VTABLE{ VTABLE::BSSplatterExtraData };
	};
}
