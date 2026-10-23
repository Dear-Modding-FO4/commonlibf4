#pragma once

#include "RE/B/BSResource_Archive2_Index.h"

namespace RE::BSResource::SDirectory2
{
	class Cursor256 :
		public Archive2::Index256::CursorWithEntry  // 000
	{
	public:
		// members
		Archive2::Index256* index;  // 170
	};
	static_assert(sizeof(Cursor256) == 0x178);

	class Cursor1024 :
		public Archive2::Index1024::CursorWithEntry  // 000
	{
	public:
		// members
		Archive2::Index1024* index;  // 178
	};
	static_assert(sizeof(Cursor1024) == 0x180);

	using Cursor = Cursor1024;
}
