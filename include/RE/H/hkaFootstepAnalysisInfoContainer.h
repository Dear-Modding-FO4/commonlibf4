#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkaFootstepAnalysisInfo;

	class __declspec(novtable) hkaFootstepAnalysisInfoContainer :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaFootstepAnalysisInfoContainer };
		inline static constexpr auto VTABLE{ VTABLE::hkaFootstepAnalysisInfoContainer };

		// members
		hkArray<hkaFootstepAnalysisInfo*> m_previewInfo;  // 0x10
	};
	static_assert(sizeof(hkaFootstepAnalysisInfoContainer) == 0x20);
	static_assert(offsetof(hkaFootstepAnalysisInfoContainer, m_previewInfo) == 0x10);
}
