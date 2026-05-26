#pragma once

#include "RE/O/OwnedController.h"

namespace RE
{
	class __declspec(novtable) OwnedCameraEffectController : public OwnedController
	{
	public:
		static constexpr auto RTTI{ RTTI::OwnedCameraEffectController };
		static constexpr auto VTABLE{ VTABLE::OwnedCameraEffectController };
	};
}
