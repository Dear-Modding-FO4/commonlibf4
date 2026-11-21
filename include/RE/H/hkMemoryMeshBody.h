#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkMeshBody.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkIndexedTransformSet;
	class hkMeshShape;
	class hkMeshVertexBuffer;

	class __declspec(novtable) hkMemoryMeshBody :
		public hkMeshBody  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMemoryMeshBody };
		inline static constexpr auto VTABLE{ VTABLE::hkMemoryMeshBody };

		// members
		std::uint8_t m_transform[0x40];                // 0x10
		hkIndexedTransformSet* m_transformSet;         // 0x50
		hkMeshShape* m_shape;                          // 0x58
		hkArray<hkMeshVertexBuffer*> m_vertexBuffers;  // 0x60
		hkStringPtr m_name;                            // 0x70
		std::uint8_t unk78[0x8];                       // 0x78
	};
	static_assert(sizeof(hkMemoryMeshBody) == 0x80);
	static_assert(offsetof(hkMemoryMeshBody, m_transform) == 0x10);
	static_assert(offsetof(hkMemoryMeshBody, m_transformSet) == 0x50);
	static_assert(offsetof(hkMemoryMeshBody, m_shape) == 0x58);
	static_assert(offsetof(hkMemoryMeshBody, m_vertexBuffers) == 0x60);
	static_assert(offsetof(hkMemoryMeshBody, m_name) == 0x70);
}
