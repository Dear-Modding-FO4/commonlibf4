#pragma once

#include "RE/H/hknpCompressedMeshShapeCinfo.h"

namespace RE
{
	class __declspec(novtable) hknpDefaultCompressedMeshShapeCinfo :
		public hknpCompressedMeshShapeCinfo  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpDefaultCompressedMeshShapeCinfo };
		inline static constexpr auto VTABLE{ VTABLE::hknpDefaultCompressedMeshShapeCinfo };

		// members
		void* unk38;          // 0x38
		void* unk40;          // 0x40
		std::uint32_t unk48;  // 0x48
	};
	static_assert(sizeof(hknpDefaultCompressedMeshShapeCinfo) == 0x50);
	static_assert(offsetof(hknpDefaultCompressedMeshShapeCinfo, unk38) == 0x38);
	static_assert(offsetof(hknpDefaultCompressedMeshShapeCinfo, unk40) == 0x40);
	static_assert(offsetof(hknpDefaultCompressedMeshShapeCinfo, unk48) == 0x48);
}
