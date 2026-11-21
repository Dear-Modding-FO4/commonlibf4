#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class __declspec(novtable) hkbProjectStringData :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbProjectStringData };
		inline static constexpr auto VTABLE{ VTABLE::hkbProjectStringData };

		// members
		hkArray<hkStringPtr> m_animationFilenames;  // 0x10
		hkArray<hkStringPtr> m_behaviorFilenames;   // 0x20
		hkArray<hkStringPtr> m_characterFilenames;  // 0x30
		hkArray<hkStringPtr> m_eventNames;          // 0x40
		hkStringPtr m_animationPath;                // 0x50
		hkStringPtr m_behaviorPath;                 // 0x58
		hkStringPtr m_characterPath;                // 0x60
		hkStringPtr m_scriptsPath;                  // 0x68
		hkStringPtr m_fullPathToSource;             // 0x70
		hkStringPtr m_rootPath;                     // 0x78
	};
	static_assert(sizeof(hkbProjectStringData) == 0x80);
	static_assert(offsetof(hkbProjectStringData, m_animationFilenames) == 0x10);
	static_assert(offsetof(hkbProjectStringData, m_behaviorFilenames) == 0x20);
	static_assert(offsetof(hkbProjectStringData, m_characterFilenames) == 0x30);
	static_assert(offsetof(hkbProjectStringData, m_eventNames) == 0x40);
	static_assert(offsetof(hkbProjectStringData, m_animationPath) == 0x50);
	static_assert(offsetof(hkbProjectStringData, m_behaviorPath) == 0x58);
	static_assert(offsetof(hkbProjectStringData, m_characterPath) == 0x60);
	static_assert(offsetof(hkbProjectStringData, m_scriptsPath) == 0x68);
	static_assert(offsetof(hkbProjectStringData, m_fullPathToSource) == 0x70);
	static_assert(offsetof(hkbProjectStringData, m_rootPath) == 0x78);
}
