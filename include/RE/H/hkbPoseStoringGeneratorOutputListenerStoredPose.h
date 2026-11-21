#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbNode;

	class __declspec(novtable) hkbPoseStoringGeneratorOutputListenerStoredPose :
		public hkReferencedObject  // 0x00
	{
	public:

		// members
		hkbNode* m_node;                  // 0x10
		hkArray<hkQsTransformf> m_pose;   // 0x18
		std::uint8_t unk28[0x8];          // 0x28
		hkQsTransformf m_worldFromModel;  // 0x30
		bool m_isPoseValid;               // 0x60
	};
	static_assert(sizeof(hkbPoseStoringGeneratorOutputListenerStoredPose) == 0x70);
	static_assert(offsetof(hkbPoseStoringGeneratorOutputListenerStoredPose, m_node) == 0x10);
	static_assert(offsetof(hkbPoseStoringGeneratorOutputListenerStoredPose, m_pose) == 0x18);
	static_assert(offsetof(hkbPoseStoringGeneratorOutputListenerStoredPose, m_worldFromModel) == 0x30);
	static_assert(offsetof(hkbPoseStoringGeneratorOutputListenerStoredPose, m_isPoseValid) == 0x60);
}
