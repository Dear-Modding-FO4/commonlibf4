#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkxVertexBufferVertexData.h"
#include "RE/H/hkxVertexDescription.h"

namespace RE
{
	class __declspec(novtable) hkxVertexBuffer :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkxVertexBuffer };
		inline static constexpr auto VTABLE{ VTABLE::hkxVertexBuffer };

		// members
		hkxVertexBufferVertexData m_data;  // 0x10
		hkxVertexDescription m_desc;       // 0x78
	};
	static_assert(sizeof(hkxVertexBuffer) == 0x88);
	static_assert(offsetof(hkxVertexBuffer, m_data) == 0x10);
	static_assert(offsetof(hkxVertexBuffer, m_desc) == 0x78);
}
