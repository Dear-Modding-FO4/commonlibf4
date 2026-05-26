#pragma once

#include "RE/N/NiInterpController.h"

namespace RE
{
	class __declspec(novtable) BSMultiTargetTreadTransfController : public NiInterpController
	{
	public:
		static constexpr auto RTTI{ RTTI::BSMultiTargetTreadTransfController };
		static constexpr auto VTABLE{ VTABLE::BSMultiTargetTreadTransfController };
	};
}
