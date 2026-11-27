#pragma once

#include "RE/B/BSFlattenedBoneTree.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class BSFlattenedBoneRef
	{
	public:
		[[nodiscard]] BSFixedString GetName() const
		{
			if (!root) {
				return {};
			}
			if (boneIndex < 0) {
				return root->name;
			}
			const auto* tree = static_cast<const BSFlattenedBoneTree*>(root.get());
			if (!tree->bone || boneIndex >= tree->boneCount) {
				return {};
			}
			return tree->bone[boneIndex].name;
		}

		[[nodiscard]] const NiTransform& GetWorldTransform() const noexcept
		{
			if (!root) {
				return NiTransform::IDENTITY;
			}
			if (boneIndex < 0) {
				return root->world;
			}
			const auto* tree = static_cast<const BSFlattenedBoneTree*>(root.get());
			if (!tree->bone || boneIndex >= tree->boneCount) {
				return NiTransform::IDENTITY;
			}
			const auto& bone = tree->bone[boneIndex];
			return bone.node ? bone.node->world : bone.world;
		}

		// A negative index denotes a real node; otherwise root is the flattened bone tree.
		NiPointer<NiAVObject> root;             // 00
		std::int32_t          boneIndex{ -1 };  // 08
	};
	static_assert(offsetof(BSFlattenedBoneRef, boneIndex) == 0x8);
	static_assert(sizeof(BSFlattenedBoneRef) == 0x10);
}
