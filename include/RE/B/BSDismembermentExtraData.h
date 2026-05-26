#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSDismembermentExtraData : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSDismembermentExtraData };
		static constexpr auto VTABLE{ VTABLE::BSDismembermentExtraData };
	};
}
