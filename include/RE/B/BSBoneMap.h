#pragma once

#include "RE/N/NiExtraData.h"

namespace RE
{
	class __declspec(novtable) BSBoneMap : public NiExtraData
	{
	public:
		static constexpr auto RTTI{ RTTI::BSBoneMap };
		static constexpr auto VTABLE{ VTABLE::BSBoneMap };
	};
}
