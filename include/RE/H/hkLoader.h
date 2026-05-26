#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkLoader : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkLoader };
		static constexpr auto VTABLE{ VTABLE::hkLoader };
	};
}
