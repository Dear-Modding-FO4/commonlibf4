#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkThreadPool : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkThreadPool };
		static constexpr auto VTABLE{ VTABLE::hkThreadPool };
	};
}
