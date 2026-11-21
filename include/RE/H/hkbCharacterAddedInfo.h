#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaSkeleton;

	class __declspec(novtable) hkbCharacterAddedInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterAddedInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterAddedInfo };

		// members
		std::uint64_t m_characterId;               // 0x10
		hkStringPtr m_instanceName;                // 0x18
		hkStringPtr m_templateName;                // 0x20
		hkStringPtr m_fullPathToProject;           // 0x28
		hkStringPtr m_localScriptsPath;            // 0x30
		hkStringPtr m_remoteScriptsPath;           // 0x38
		hkaSkeleton* m_skeleton;                   // 0x40
		std::uint8_t unk48[0x8];                   // 0x48
		hkQsTransformf m_worldFromModel;           // 0x50
		hkArray<hkQsTransformf> m_poseModelSpace;  // 0x80
	};
	static_assert(sizeof(hkbCharacterAddedInfo) == 0x90);
	static_assert(offsetof(hkbCharacterAddedInfo, m_characterId) == 0x10);
	static_assert(offsetof(hkbCharacterAddedInfo, m_instanceName) == 0x18);
	static_assert(offsetof(hkbCharacterAddedInfo, m_templateName) == 0x20);
	static_assert(offsetof(hkbCharacterAddedInfo, m_fullPathToProject) == 0x28);
	static_assert(offsetof(hkbCharacterAddedInfo, m_localScriptsPath) == 0x30);
	static_assert(offsetof(hkbCharacterAddedInfo, m_remoteScriptsPath) == 0x38);
	static_assert(offsetof(hkbCharacterAddedInfo, m_skeleton) == 0x40);
	static_assert(offsetof(hkbCharacterAddedInfo, m_worldFromModel) == 0x50);
	static_assert(offsetof(hkbCharacterAddedInfo, m_poseModelSpace) == 0x80);
}
