#pragma once

#include "RE/N/NiCullingProcess.h"

namespace RE
{
	class __declspec(novtable) BSFadeNodeCuller : public NiCullingProcess
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFadeNodeCuller };
		static constexpr auto VTABLE{ VTABLE::BSFadeNodeCuller };
	};
}
