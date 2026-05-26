#pragma once

#include "RE/N/NiInterpController.h"

namespace RE
{
	class __declspec(novtable) NiMultiTargetTransformController : public NiInterpController
	{
	public:
		static constexpr auto RTTI{ RTTI::NiMultiTargetTransformController };
		static constexpr auto VTABLE{ VTABLE::NiMultiTargetTransformController };
	};
}
