#pragma once

#include "RE/B/BSFlattenedBoneRef.h"
#include "RE/B/BSSkinBoneData.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class NiAVObject;
	class NiBound;

	namespace BSSkin
	{
		class __declspec(novtable) Instance :
			public NiObject  // 00
		{
		public:
			static constexpr auto RTTI{ RTTI::BSSkin__Instance };
			static constexpr auto VTABLE{ VTABLE::BSSkin__Instance };

			Instance() = delete;

			[[nodiscard]] std::uint32_t GetBoneCount() const noexcept { return rawBones.size(); }

			[[nodiscard]] const NiTransform* GetBoneWorldTransform(std::uint32_t a_index) const noexcept
			{
				return a_index < rawBones.size() ? rawBones[a_index] : nullptr;
			}

			[[nodiscard]] bool GetFlattenedBoneReference(std::uint32_t a_index, BSFlattenedBoneRef& a_reference) const
			{
				if (a_index >= bones.size() || a_index >= rawBones.size()) {
					a_reference = {};
					return false;
				}
				using func_t = decltype(&Instance::GetFlattenedBoneReference);
				static REL::Relocation<func_t> func{ ID::BSSkin::Instance::GetFlattenedBoneReference };
				return func(this, a_index, a_reference);
			}

			void MakeBonesReal()
			{
				using func_t = decltype(&Instance::MakeBonesReal);
				static REL::Relocation<func_t> func{ ID::BSSkin::Instance::MakeBonesReal };
				func(this);
			}

			void UpdateModelBound(NiBound& a_bound) const
			{
				using func_t = decltype(&Instance::UpdateModelBound);
				static REL::Relocation<func_t> func{ ID::BSSkin::Instance::UpdateModelBound };
				func(this, a_bound);
			}

			// Null bone nodes can refer to flattened-tree transforms through rawBones.
			BSTArray<NiAVObject*>  bones;                     // 10
			BSTArray<NiTransform*> rawBones;                  // 28
			NiPointer<BoneData>    boneData;                  // 40
			NiAVObject*            rootNode;                  // 48
			NiPoint3A*             scales;                    // 50
			BSSpinLock             matrixLock;                // 58
			NiTransform            unk60;                     // 60
			NiPoint4*              boneMatrices;              // A0 - three float4 rows per bone
			NiPoint4*              previousBoneMatrices;      // A8
			std::uint32_t          boneMatrixCount;           // B0
			std::uint32_t          boneMatrixRows;            // B4
			std::uint32_t          allocatedBoneMatrixBytes;  // B8
			std::uint32_t          lastUpdatedFrame;          // BC
		};
		static_assert(offsetof(Instance, bones) == 0x10);
		static_assert(offsetof(Instance, rawBones) == 0x28);
		static_assert(offsetof(Instance, boneData) == 0x40);
		static_assert(offsetof(Instance, rootNode) == 0x48);
		static_assert(offsetof(Instance, matrixLock) == 0x58);
		static_assert(offsetof(Instance, boneMatrices) == 0xA0);
		static_assert(offsetof(Instance, lastUpdatedFrame) == 0xBC);
		static_assert(sizeof(Instance) == 0xC0);
	}
}
