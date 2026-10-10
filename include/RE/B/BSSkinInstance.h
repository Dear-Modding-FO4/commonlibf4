#pragma once

#include "RE/B/BSTArray.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;

	namespace BSSkin
	{
		class __declspec(novtable) Instance :
			public NiObject  // 00
		{
		public:
			static constexpr auto RTTI{ RTTI::BSSkin__Instance };
			static constexpr auto VTABLE{ VTABLE::BSSkin__Instance };

			// members
			BSTArray<NiAVObject*> bones;     // 10
			BSTArray<NiAVObject*> rawBones;  // 28
			NiPointer<NiObject>   boneData;  // 40
			NiAVObject*           rootNode;  // 48
		};
		static_assert(offsetof(Instance, rawBones) == 0x28);
		static_assert(offsetof(Instance, boneData) == 0x40);
		static_assert(offsetof(Instance, rootNode) == 0x48);
	}
}
