#pragma once

#include "RE/N/NiMatrix3.h"

namespace RE
{
	class BSFaceGenAnimationData;

	namespace BSResource
	{
		class EntryBase;
	}

	class alignas(0x10) BSFaceGenNiNode : public NiNode
	{
	public:
		// members
		NiMatrix3				baseRotation;			// 140
		BSFaceGenAnimationData* faceGenAnimationData;	// 170
		float                   lastTime;				// 178
		std::uint16_t           faceGenFlags;			// 17C
		BSResource::EntryBase*  resourceEntry;			// 180
	};
	static_assert(sizeof(BSFaceGenNiNode) == 0x190);
}
