#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkbAssetBundleStringData;
	class hkbCharacterStringDataFileNameMeshNamePair;

	class __declspec(novtable) hkbCharacterStringData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterStringData };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterStringData };

		// members
		hkArray<hkbCharacterStringDataFileNameMeshNamePair> m_skinNames;            // 0x10
		hkArray<hkbCharacterStringDataFileNameMeshNamePair> m_boneAttachmentNames;  // 0x20
		hkArray<hkbAssetBundleStringData> m_animationBundleNameData;                // 0x30
		hkArray<hkbAssetBundleStringData> m_animationBundleFilenameData;            // 0x40
		hkArray<hkStringPtr> m_characterPropertyNames;                              // 0x50
		hkArray<hkStringPtr> m_retargetingSkeletonMapperFilenames;                  // 0x60
		hkArray<hkStringPtr> m_lodNames;                                            // 0x70
		hkArray<hkStringPtr> m_mirroredSyncPointSubstringsA;                        // 0x80
		hkArray<hkStringPtr> m_mirroredSyncPointSubstringsB;                        // 0x90
		hkStringPtr m_name;                                                         // 0xA0
		hkStringPtr m_rigName;                                                      // 0xA8
		hkStringPtr m_ragdollName;                                                  // 0xB0
		hkStringPtr m_behaviorFilename;                                             // 0xB8
		hkStringPtr m_luaScriptOnCharacterActivated;                                // 0xC0
		hkStringPtr m_luaScriptOnCharacterDeactivated;                              // 0xC8
		hkArray<hkStringPtr> m_luaFiles;                                            // 0xD0
	};
	static_assert(sizeof(hkbCharacterStringData) == 0xE0);
	static_assert(offsetof(hkbCharacterStringData, m_skinNames) == 0x10);
	static_assert(offsetof(hkbCharacterStringData, m_boneAttachmentNames) == 0x20);
	static_assert(offsetof(hkbCharacterStringData, m_animationBundleNameData) == 0x30);
	static_assert(offsetof(hkbCharacterStringData, m_animationBundleFilenameData) == 0x40);
	static_assert(offsetof(hkbCharacterStringData, m_characterPropertyNames) == 0x50);
	static_assert(offsetof(hkbCharacterStringData, m_retargetingSkeletonMapperFilenames) == 0x60);
	static_assert(offsetof(hkbCharacterStringData, m_lodNames) == 0x70);
	static_assert(offsetof(hkbCharacterStringData, m_mirroredSyncPointSubstringsA) == 0x80);
	static_assert(offsetof(hkbCharacterStringData, m_mirroredSyncPointSubstringsB) == 0x90);
	static_assert(offsetof(hkbCharacterStringData, m_name) == 0xA0);
	static_assert(offsetof(hkbCharacterStringData, m_rigName) == 0xA8);
	static_assert(offsetof(hkbCharacterStringData, m_ragdollName) == 0xB0);
	static_assert(offsetof(hkbCharacterStringData, m_behaviorFilename) == 0xB8);
	static_assert(offsetof(hkbCharacterStringData, m_luaScriptOnCharacterActivated) == 0xC0);
	static_assert(offsetof(hkbCharacterStringData, m_luaScriptOnCharacterDeactivated) == 0xC8);
	static_assert(offsetof(hkbCharacterStringData, m_luaFiles) == 0xD0);
}
