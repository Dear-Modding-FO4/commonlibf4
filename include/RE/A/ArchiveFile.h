#pragma once

#include "RE/B/BSFile.h"

namespace RE
{
	class __declspec(novtable) ArchiveFile : public BSFile
	{
	public:
		static constexpr auto RTTI{ RTTI::ArchiveFile };
		static constexpr auto VTABLE{ VTABLE::ArchiveFile };
	};
}
