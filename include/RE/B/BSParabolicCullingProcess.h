#pragma once

#include "RE/B/BSCullingProcess.h"

namespace RE
{
	class __declspec(novtable) BSParabolicCullingProcess : public BSCullingProcess
	{
	public:
		static constexpr auto RTTI{ RTTI::BSParabolicCullingProcess };
		static constexpr auto VTABLE{ VTABLE::BSParabolicCullingProcess };
	};
}
