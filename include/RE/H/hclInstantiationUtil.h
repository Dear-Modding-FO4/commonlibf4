#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hclInstantiationUtil : public hkReferencedObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hclInstantiationUtil };
		static constexpr auto VTABLE{ VTABLE::hclInstantiationUtil };
	};
}
