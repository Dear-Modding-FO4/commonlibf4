#pragma once

#include "RE/H/hkVertexFormatElement.h"

namespace RE
{
	class hkVertexFormat
	{
	public:

		enum class ComponentType : std::uint32_t
		{
			kTypeNone = 0,
			kTypeInt8 = 1,
			kTypeUint8 = 2,
			kTypeInt16 = 3,
			kTypeUint16 = 4,
			kTypeInt32 = 5,
			kTypeUint32 = 6,
			kTypeUint8Dword = 7,
			kTypeArgb32 = 8,
			kTypeFloat16 = 9,
			kTypeFloat32 = 10,
			kTypeVector4 = 11,
			kTypeLast = 12
		};

		enum class ComponentUsage : std::uint32_t
		{
			kUsageNone = 0,
			kUsagePosition = 1,
			kUsageNormal = 2,
			kUsageColor = 3,
			kUsageTangent = 4,
			kUsageBinormal = 5,
			kUsageBlendMatrixIndex = 6,
			kUsageBlendWeights = 7,
			kUsageBlendWeightsLastImplied = 8,
			kUsageTexCoord = 9,
			kUsagePointSize = 10,
			kUsageUser = 11,
			kUsageLast = 12
		};

		enum class HintFlags : std::uint32_t
		{
			kFlagRead = 1,
			kFlagWrite = 2,
			kFlagDynamic = 4,
			kFlagNotShared = 8
		};

		enum class SharingType : std::uint32_t
		{
			kSharingAllShared = 0,
			kSharingAllNotShared = 1,
			kSharingMixture = 2
		};

		// members
		hkVertexFormatElement m_elements[32];  // 0x00
		std::int32_t m_numElements;            // 0x100
	};
	static_assert(sizeof(hkVertexFormat) == 0x104);
	static_assert(offsetof(hkVertexFormat, m_elements) == 0x0);
	static_assert(offsetof(hkVertexFormat, m_numElements) == 0x100);
}
