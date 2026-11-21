#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkxMeshSection;
	class hkxMeshUserChannelInfo;

	class __declspec(novtable) hkxMesh :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxMesh };
		inline static constexpr auto VTABLE{ VTABLE::hkxMesh };

		// members
		hkArray<hkxMeshSection*> m_sections;                  // 0x10
		hkArray<hkxMeshUserChannelInfo*> m_userChannelInfos;  // 0x20
	};
	static_assert(sizeof(hkxMesh) == 0x30);
	static_assert(offsetof(hkxMesh, m_sections) == 0x10);
	static_assert(offsetof(hkxMesh, m_userChannelInfos) == 0x20);
}
