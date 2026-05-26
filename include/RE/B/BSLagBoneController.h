#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) BSLagBoneController : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLagBoneController };
		static constexpr auto VTABLE{ VTABLE::BSLagBoneController };
	};
}
