#pragma once

#include "RE/H/hkArray.h"

namespace RE
{
	class hkxVertexDescriptionElementDecl;

	class hkxVertexDescription
	{
	public:

		enum class DataType : std::uint32_t
		{
			kHkxDtNone = 0,
			kHkxDtUint8 = 1,
			kHkxDtInt16 = 2,
			kHkxDtUint32 = 3,
			kHkxDtFloat = 4
		};

		enum class DataUsage : std::uint32_t
		{
			kHkxDuNone = 0,
			kHkxDuPosition = 1,
			kHkxDuColor = 2,
			kHkxDuNormal = 4,
			kHkxDuTangent = 8,
			kHkxDuBinormal = 16,
			kHkxDuTexcoord = 32,
			kHkxDuBlendweights = 64,
			kHkxDuBlendindices = 128,
			kHkxDuUserdata = 256
		};

		// members
		hkArray<hkxVertexDescriptionElementDecl> m_decls;  // 0x00
	};
	static_assert(sizeof(hkxVertexDescription) == 0x10);
	static_assert(offsetof(hkxVertexDescription, m_decls) == 0x0);
}
