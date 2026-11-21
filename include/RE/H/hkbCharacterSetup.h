#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkaSkeleton;
	class hkaSkeletonMapper;
	class hkbCharacterData;

	class __declspec(novtable) hkbCharacterSetup :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterSetup };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterSetup };

		// members
		hkArray<hkaSkeletonMapper*> m_retargetingSkeletonMappers;  // 0x10
		hkaSkeleton* m_animationSkeleton;                          // 0x20
		hkaSkeletonMapper* m_ragdollToAnimationSkeletonMapper;     // 0x28
		hkaSkeletonMapper* m_animationToRagdollSkeletonMapper;     // 0x30
		void* m_animationBindingSet;                               // 0x38
		hkbCharacterData* m_data;                                  // 0x40
		void* m_unscaledAnimationSkeleton;                         // 0x48
		void* m_mirroredSkeleton;                                  // 0x50
		void* m_characterPropertyIdMap;                            // 0x58
		void* m_criticalSection;                                   // 0x60
	};
	static_assert(sizeof(hkbCharacterSetup) == 0x68);
	static_assert(offsetof(hkbCharacterSetup, m_retargetingSkeletonMappers) == 0x10);
	static_assert(offsetof(hkbCharacterSetup, m_animationSkeleton) == 0x20);
	static_assert(offsetof(hkbCharacterSetup, m_ragdollToAnimationSkeletonMapper) == 0x28);
	static_assert(offsetof(hkbCharacterSetup, m_animationToRagdollSkeletonMapper) == 0x30);
	static_assert(offsetof(hkbCharacterSetup, m_animationBindingSet) == 0x38);
	static_assert(offsetof(hkbCharacterSetup, m_data) == 0x40);
	static_assert(offsetof(hkbCharacterSetup, m_unscaledAnimationSkeleton) == 0x48);
	static_assert(offsetof(hkbCharacterSetup, m_mirroredSkeleton) == 0x50);
	static_assert(offsetof(hkbCharacterSetup, m_characterPropertyIdMap) == 0x58);
	static_assert(offsetof(hkbCharacterSetup, m_criticalSection) == 0x60);
}
