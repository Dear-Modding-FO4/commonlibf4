#pragma once

#include "RE/B/BSCullingProcess.h"

namespace RE
{
	class __declspec(novtable) BSGeometryListCullingProcess : public BSCullingProcess
	{
	public:
		static constexpr auto RTTI{ RTTI::BSGeometryListCullingProcess };
		static constexpr auto VTABLE{ VTABLE::BSGeometryListCullingProcess };
	};
}
