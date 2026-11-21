#pragma once

#include "RE/B/bhkICharOrientationController.h"

namespace RE
{
	class __declspec(novtable) bhkQuadOrientationController :
		public bhkICharOrientationController  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkQuadOrientationController };
		inline static constexpr auto VTABLE{ VTABLE::bhkQuadOrientationController };

		// members
		std::uint8_t unk08[0xC8];  // 0x08
		void* unkD0;               // 0xD0
		void* unkD8;               // 0xD8
	};
	static_assert(sizeof(bhkQuadOrientationController) == 0xE0);
	static_assert(offsetof(bhkQuadOrientationController, unkD0) == 0xD0);
	static_assert(offsetof(bhkQuadOrientationController, unkD8) == 0xD8);
}
