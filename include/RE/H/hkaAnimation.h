#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkaAnimation : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaAnimation };
		static constexpr auto VTABLE{ VTABLE::hkaAnimation };
	};
}
