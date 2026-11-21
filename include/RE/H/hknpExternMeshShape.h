#pragma once

#include "RE/H/hknpCompositeShape.h"

namespace RE
{
	class hknpExternMeshShapeData;
	class hknpExternMeshShapeGeometry;

	class __declspec(novtable) hknpExternMeshShape :
		public hknpCompositeShape  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpExternMeshShape };
		inline static constexpr auto VTABLE{ VTABLE::hknpExternMeshShape };

		enum class RebuildFlagsEnum : std::uint32_t
		{
			kRebuildUseDoubleBuffering = 1,
			kRebuildRefitOnly = 2
		};

		// members
		hknpExternMeshShapeGeometry* m_geometry;        // 0x60
		hknpExternMeshShapeData* m_boundingVolumeData;  // 0x68
	};
	static_assert(sizeof(hknpExternMeshShape) == 0x70);
	static_assert(offsetof(hknpExternMeshShape, m_geometry) == 0x60);
	static_assert(offsetof(hknpExternMeshShape, m_boundingVolumeData) == 0x68);
}
