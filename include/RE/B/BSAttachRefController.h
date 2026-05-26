#pragma once

#include "RE/N/NiTimeController.h"

namespace RE
{
	class __declspec(novtable) BSAttachRefController : public NiTimeController
	{
	public:
		static constexpr auto RTTI{ RTTI::BSAttachRefController };
		static constexpr auto VTABLE{ VTABLE::BSAttachRefController };
	};
}
