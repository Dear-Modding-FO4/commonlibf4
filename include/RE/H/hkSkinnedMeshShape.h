#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkSkinnedMeshShape :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkSkinnedMeshShape };
		inline static constexpr auto VTABLE{ VTABLE::hkSkinnedMeshShape };

		// add
		virtual std::int32_t getNumBoneSections();  // 0x20 [04]
		virtual void getBoneSection();  // 0x28 [05] (int boneSectionIndex, BoneSection& boneSectionOut)
		virtual void getBoneSet();  // 0x30 [06] (BoneSetId boneSetId, BoneSet& boneSetOut)
		virtual void getBoneSetBones();  // 0x38 [07] (BoneSetId boneSetId, hkArray<hkInt16>& bonesOut)
		virtual std::int32_t getNumParts();  // 0x40 [08]
		virtual void getPart();  // 0x48 [09] (int partIndex, Part& partOut)
		virtual void dbgOut();  // 0x50 [0A]
		virtual const char* getName();  // 0x58 [0B]
		virtual void setName(const char* a_name);  // 0x60 [0C]
		virtual void addBoneSection();  // 0x68 [0D] (hkMeshShape* meshShape, BoneSetId startBoneSetId, hkInt16 numBoneSets)
		virtual void addPart();  // 0x70 [0E] (hkSkinnedMeshShape::Part&)
		virtual void sortParts();  // 0x78 [0F]
		virtual void addBoneSet();  // 0x80 [10] (short__int)
	};
	static_assert(sizeof(hkSkinnedMeshShape) == 0x10);
}
