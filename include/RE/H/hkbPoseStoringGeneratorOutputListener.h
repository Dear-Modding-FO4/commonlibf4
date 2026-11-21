#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbGeneratorOutputListener.h"

namespace RE
{
	class hkbPoseStoringGeneratorOutputListenerStoredPose;

	class __declspec(novtable) hkbPoseStoringGeneratorOutputListener :
		public hkbGeneratorOutputListener  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbPoseStoringGeneratorOutputListener };
		inline static constexpr auto VTABLE{ VTABLE::hkbPoseStoringGeneratorOutputListener };

		// members
		hkArray<hkbPoseStoringGeneratorOutputListenerStoredPose*> m_storedPoses;  // 0x10
		bool m_dirty;                                                             // 0x20
		std::uint8_t unk21[0x7];                                                  // 0x21
		void* m_nodeToIndexMap;                                                   // 0x28
	};
	static_assert(sizeof(hkbPoseStoringGeneratorOutputListener) == 0x30);
	static_assert(offsetof(hkbPoseStoringGeneratorOutputListener, m_storedPoses) == 0x10);
	static_assert(offsetof(hkbPoseStoringGeneratorOutputListener, m_dirty) == 0x20);
	static_assert(offsetof(hkbPoseStoringGeneratorOutputListener, m_nodeToIndexMap) == 0x28);
}
