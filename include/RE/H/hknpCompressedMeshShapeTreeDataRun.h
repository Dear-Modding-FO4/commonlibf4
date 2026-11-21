#pragma once

#include "RE/H/hkcdStaticMeshTreeBasePrimitiveDataRunBase_DataRunData.h"

namespace RE
{
	class hknpCompressedMeshShapeTreeDataRun :
		public hkcdStaticMeshTreeBasePrimitiveDataRunBase_DataRunData  // 0x00
	{
	public:
	};
	static_assert(sizeof(hknpCompressedMeshShapeTreeDataRun) == 0x4);
}
