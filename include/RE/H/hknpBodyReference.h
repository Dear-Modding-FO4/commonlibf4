#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpBodyReference :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBodyReference };
		inline static constexpr auto VTABLE{ VTABLE::hknpBodyReference };

		// members
		std::uint32_t m_id;  // 0x10
	};
	static_assert(sizeof(hknpBodyReference) == 0x18);
	static_assert(offsetof(hknpBodyReference, m_id) == 0x10);
}
