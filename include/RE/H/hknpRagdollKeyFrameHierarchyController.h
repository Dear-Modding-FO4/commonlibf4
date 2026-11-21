#pragma once

#include "RE/H/hknpRagdollController.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hknpRagdollKeyFrameHierarchyController :
		public hknpRagdollController  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpRagdollKeyFrameHierarchyController };
		inline static constexpr auto VTABLE{ VTABLE::hknpRagdollKeyFrameHierarchyController };

		// members
		hkArray<std::uint8_t> unk40;  // 0x40
		void* unk50;               // 0x50
		std::uint8_t unk58[0x8];   // 0x58
		float unk60;               // 0x60
		std::uint8_t pad64[0x4];  // 0x64
		void* unk68;  // 0x68
		void* unk70;               // 0x70
		std::uint8_t unk78[0x38];  // 0x78
		void* unkB0;               // 0xB0
		std::uint8_t unkB8[0x8];   // 0xB8
		hkArray<std::uint8_t> unkC0;  // 0xC0
		hkArray<std::uint32_t> unkD0;  // 0xD0
	};
	static_assert(sizeof(hknpRagdollKeyFrameHierarchyController) == 0xE0);
	static_assert(offsetof(hknpRagdollKeyFrameHierarchyController, unk50) == 0x50);
	static_assert(offsetof(hknpRagdollKeyFrameHierarchyController, unk60) == 0x60);
	static_assert(offsetof(hknpRagdollKeyFrameHierarchyController, unk70) == 0x70);
	static_assert(offsetof(hknpRagdollKeyFrameHierarchyController, unkB0) == 0xB0);
	static_assert(offsetof(hknpRagdollKeyFrameHierarchyController, unk40) == 0x40);
	static_assert(offsetof(hknpRagdollKeyFrameHierarchyController, unkC0) == 0xC0);
	static_assert(offsetof(hknpRagdollKeyFrameHierarchyController, unkD0) == 0xD0);
	static_assert(offsetof(hknpRagdollKeyFrameHierarchyController, pad64) == 0x64);
	static_assert(offsetof(hknpRagdollKeyFrameHierarchyController, unk68) == 0x68);
}
