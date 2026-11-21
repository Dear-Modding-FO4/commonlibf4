#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterSteppedInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterSteppedInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterSteppedInfo };

		// members
		std::uint64_t m_characterId;                          // 0x10
		float m_deltaTime;                                    // 0x18
		std::uint8_t pad1C[0x4];                              // 0x1C
		hkQsTransformf m_worldFromModel;                      // 0x20
		hkArray<hkQsTransformf> m_poseModelSpace;             // 0x50
		hkArray<hkQsTransformf> m_rigidAttachmentTransforms;  // 0x60
	};
	static_assert(sizeof(hkbCharacterSteppedInfo) == 0x70);
	static_assert(offsetof(hkbCharacterSteppedInfo, m_characterId) == 0x10);
	static_assert(offsetof(hkbCharacterSteppedInfo, m_deltaTime) == 0x18);
	static_assert(offsetof(hkbCharacterSteppedInfo, m_worldFromModel) == 0x20);
	static_assert(offsetof(hkbCharacterSteppedInfo, m_poseModelSpace) == 0x50);
	static_assert(offsetof(hkbCharacterSteppedInfo, m_rigidAttachmentTransforms) == 0x60);
}
