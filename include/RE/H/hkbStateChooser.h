#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbStateChooser :
		public hkReferencedObject  // 0x00
	{
	public:
	};
	static_assert(sizeof(hkbStateChooser) == 0x10);
}
