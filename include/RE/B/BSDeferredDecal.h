#pragma once

#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class BSMultiBound;
	class NiAVObject;

	namespace BSDeferredDecal
	{
		class __declspec(novtable) BSDFDecal :
			public NiRefObject  // 00
		{
		public:
			static constexpr auto RTTI{ RTTI::BSDeferredDecal__BSDFDecal };
			static constexpr auto VTABLE{ VTABLE::BSDeferredDecal__BSDFDecal };

			~BSDFDecal() override;  // 00

			// members
			void*                 textureHandles[10];         // 10 - BSResource::RHandleType<...NiTexture...>
			NiPointer<NiAVObject> dynamicObject;              // 60
			BSMultiBound*         multibound;                 // 68
			NiMatrix3             projection;                 // 70
			NiPoint3A             origin;                     // A0
			float                 decalWidth;                 // B0
			float                 decalHeight;                // B4
			float                 decalDepth;                 // B8
			float                 parallaxOcclusionScale;     // BC
			float                 alpha;                      // C0
			std::uint16_t         stencilRef;                 // C4
			std::uint8_t          subTex;                     // C6
			std::uint8_t          maxParallaxOcclusionSteps;  // C7
			bool                  multiplicative;             // C8
			bool                  useGBufferNormals;          // C9
			bool                  isFirstInstance;            // CA
			bool                  intersectFrustum;           // CB
			bool                  parallaxOcclusionShadows;   // CC
		};
		static_assert(sizeof(BSDFDecal) == 0xD0);
	}
}
