#pragma once

#include "RE/N/NiIntegersExtraData.h"

namespace RE
{
	class __declspec(novtable) BSWArray : public NiIntegersExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWArray };
		static constexpr auto VTABLE{ VTABLE::BSWArray };
	};
}
