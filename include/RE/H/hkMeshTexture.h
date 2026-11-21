#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkMeshTexture :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMeshTexture };
		inline static constexpr auto VTABLE{ VTABLE::hkMeshTexture };
		enum class Format : std::uint32_t
		{
			kUnknown = 0,
			kPng = 1,
			kTga = 2,
			kBmp = 3,
			kDds = 4,
			kRaw = 5
		};

		enum class FilterMode : std::uint32_t
		{
			kPoint = 0,
			kLinear = 1,
			kAnisotropic = 2
		};

		enum class TextureUsageType : std::uint32_t
		{
			kUnknown = 0,
			kDiffuse = 1,
			kReflection = 2,
			kBump = 3,
			kNormal = 4,
			kDisplacement = 5,
			kSpecular = 6,
			kSpecularandgloss = 7,
			kOpacity = 8,
			kEmissive = 9,
			kRefraction = 10,
			kGloss = 11,
			kDominants = 12,
			kNotexported = 13
		};

	};
	static_assert(sizeof(hkMeshTexture) == 0x10);
}
