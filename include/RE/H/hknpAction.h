#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpAction : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hknpAction };
		static constexpr auto VTABLE{ VTABLE::hknpAction };
	};
}
