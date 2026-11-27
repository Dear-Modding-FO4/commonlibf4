#pragma once

#include "RE/B/BSTArray.h"
#include "RE/N/NiBound.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiTransform.h"

namespace RE::BSSkin
{
	class __declspec(novtable) BoneData :
		public NiObject
	{
	public:
		static constexpr auto RTTI{ RE::RTTI::BSSkin__BoneData };
		static constexpr auto VTABLE{ RE::VTABLE::BSSkin__BoneData };
		static constexpr auto Ni_RTTI{ RE::Ni_RTTI::BSSkin__BoneData };

		class BoneTransform
		{
		public:
			NiBound     bound;      // 00
			NiTransform transform;  // 10
		};
		static_assert(offsetof(BoneTransform, transform) == 0x10);
		static_assert(sizeof(BoneTransform) == 0x50);

		BoneData() = delete;

		[[nodiscard]] std::uint32_t GetBoneCount() const noexcept { return boneTransforms.size(); }

		// members
		BSTAlignedArray<BoneTransform> boneTransforms;  // 10
	};
	static_assert(offsetof(BoneData, boneTransforms) == 0x10);
	static_assert(sizeof(BoneData) == 0x28);
}
