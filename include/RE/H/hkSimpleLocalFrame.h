#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkLocalFrame.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkTransform.h"

namespace RE
{
	class hkLocalFrame;
	class hkLocalFrameGroup;

	class __declspec(novtable) hkSimpleLocalFrame :
		public hkLocalFrame  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkSimpleLocalFrame };
		inline static constexpr auto VTABLE{ VTABLE::hkSimpleLocalFrame };

		// members
		hkTransformf m_transform;           // 0x10
		hkArray<hkLocalFrame*> m_children;  // 0x50
		hkLocalFrame* m_parentFrame;        // 0x60
		hkLocalFrameGroup* m_group;         // 0x68
		hkStringPtr m_name;                 // 0x70
	};
	static_assert(sizeof(hkSimpleLocalFrame) == 0x80);
	static_assert(offsetof(hkSimpleLocalFrame, m_transform) == 0x10);
	static_assert(offsetof(hkSimpleLocalFrame, m_children) == 0x50);
	static_assert(offsetof(hkSimpleLocalFrame, m_parentFrame) == 0x60);
	static_assert(offsetof(hkSimpleLocalFrame, m_group) == 0x68);
	static_assert(offsetof(hkSimpleLocalFrame, m_name) == 0x70);
}
