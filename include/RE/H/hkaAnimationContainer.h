#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkaAnimation;
	class hkaAnimationBinding;
	class hkaBoneAttachment;
	class hkaMeshBinding;
	class hkaSkeleton;

	class __declspec(novtable) hkaAnimationContainer :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaAnimationContainer };
		inline static constexpr auto VTABLE{ VTABLE::hkaAnimationContainer };

		// members
		hkArray<hkaSkeleton*> m_skeletons;          // 0x10
		hkArray<hkaAnimation*> m_animations;        // 0x20
		hkArray<hkaAnimationBinding*> m_bindings;   // 0x30
		hkArray<hkaBoneAttachment*> m_attachments;  // 0x40
		hkArray<hkaMeshBinding*> m_skins;           // 0x50
	};
	static_assert(sizeof(hkaAnimationContainer) == 0x60);
	static_assert(offsetof(hkaAnimationContainer, m_skeletons) == 0x10);
	static_assert(offsetof(hkaAnimationContainer, m_animations) == 0x20);
	static_assert(offsetof(hkaAnimationContainer, m_bindings) == 0x30);
	static_assert(offsetof(hkaAnimationContainer, m_attachments) == 0x40);
	static_assert(offsetof(hkaAnimationContainer, m_skins) == 0x50);
}
