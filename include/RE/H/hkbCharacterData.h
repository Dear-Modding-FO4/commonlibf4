#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbCharacterControllerSetup.h"

namespace RE
{
	class hkReferencedObject;
	class hkbCharacterStringData;
	class hkbFootIkDriverInfo;
	class hkbHandIkDriverInfo;
	class hkbMirroredSkeletonInfo;
	class hkbVariableInfo;
	class hkbVariableValueSet;

	class __declspec(novtable) hkbCharacterData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterData };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterData };

		// members
		hkbCharacterControllerSetup m_characterControllerSetup;  // 0x10
		std::uint8_t unk38[0x8];                                 // 0x38
		hkVector4f m_modelUpMS;                                  // 0x40
		hkVector4f m_modelForwardMS;                             // 0x50
		hkVector4f m_modelRightMS;                               // 0x60
		hkArray<hkbVariableInfo> m_characterPropertyInfos;       // 0x70
		hkArray<std::int32_t> m_numBonesPerLod;                  // 0x80
		hkbVariableValueSet* m_characterPropertyValues;          // 0x90
		hkbFootIkDriverInfo* m_footIkDriverInfo;                 // 0x98
		hkbHandIkDriverInfo* m_handIkDriverInfo;                 // 0xA0
		hkReferencedObject* m_aiControlDriverInfo;               // 0xA8
		hkbCharacterStringData* m_stringData;                    // 0xB0
		hkbMirroredSkeletonInfo* m_mirroredSkeletonInfo;         // 0xB8
		hkArray<std::int16_t> m_boneAttachmentBoneIndices;       // 0xC0
		std::uint8_t m_boneAttachmentTransforms[0x10];           // 0xD0
		float m_scale;                                           // 0xE0
		std::int16_t m_numHands;                                 // 0xE4
		std::int16_t m_numFloatSlots;                            // 0xE6
	};
	static_assert(sizeof(hkbCharacterData) == 0xF0);
	static_assert(offsetof(hkbCharacterData, m_characterControllerSetup) == 0x10);
	static_assert(offsetof(hkbCharacterData, m_modelUpMS) == 0x40);
	static_assert(offsetof(hkbCharacterData, m_modelForwardMS) == 0x50);
	static_assert(offsetof(hkbCharacterData, m_modelRightMS) == 0x60);
	static_assert(offsetof(hkbCharacterData, m_characterPropertyInfos) == 0x70);
	static_assert(offsetof(hkbCharacterData, m_numBonesPerLod) == 0x80);
	static_assert(offsetof(hkbCharacterData, m_characterPropertyValues) == 0x90);
	static_assert(offsetof(hkbCharacterData, m_footIkDriverInfo) == 0x98);
	static_assert(offsetof(hkbCharacterData, m_handIkDriverInfo) == 0xA0);
	static_assert(offsetof(hkbCharacterData, m_aiControlDriverInfo) == 0xA8);
	static_assert(offsetof(hkbCharacterData, m_stringData) == 0xB0);
	static_assert(offsetof(hkbCharacterData, m_mirroredSkeletonInfo) == 0xB8);
	static_assert(offsetof(hkbCharacterData, m_boneAttachmentBoneIndices) == 0xC0);
	static_assert(offsetof(hkbCharacterData, m_boneAttachmentTransforms) == 0xD0);
	static_assert(offsetof(hkbCharacterData, m_scale) == 0xE0);
	static_assert(offsetof(hkbCharacterData, m_numHands) == 0xE4);
	static_assert(offsetof(hkbCharacterData, m_numFloatSlots) == 0xE6);
}
