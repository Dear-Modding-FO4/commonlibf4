#pragma once

#include "RE/B/BSCullingProcess.h"
#include "RE/B/BSTArray.h"

namespace RE
{
	class __declspec(novtable) BSGeometryListCullingProcess :
	    public BSCullingProcess  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::BSGeometryListCullingProcess };
		static constexpr auto VTABLE{ VTABLE::BSGeometryListCullingProcess };
		static constexpr auto Ni_RTTI{ Ni_RTTI::BSGeometryListCullingProcess };

		~BSGeometryListCullingProcess() override;  // 18

		// override (NiCullingProcess)
		const NiRTTI* GetRTTI() const override;                       // 00
		void          AppendVirtual(BSGeometry* a_visible) override;  // 1B

		// override (BSCullingProcess)
		void AppendNonAccum(NiAVObject* a_object) override;  // 1C

		// members
		BSTArray<NiAVObject*>    collectedGeometry;        // 1A0
		BSTArray<std::uint32_t>  alphaGroupStartIndices;   // 1B8
		BSTArray<std::uint32_t>  alphaGroupEndIndices;     // 1D0
		BSTArray<const NiBound*> alphaGroupBounds;         // 1E8
		BSTArray<bool>           alphaGroupFlags;          // 200
		const NiBound*           currentBound;             // 218
		std::uint32_t            currentAccumulatorIndex;  // 220
		std::byte                unk224[4];                // 224
	};
	static_assert(offsetof(BSGeometryListCullingProcess, collectedGeometry) == 0x1A0);
	static_assert(offsetof(BSGeometryListCullingProcess, alphaGroupStartIndices) == 0x1B8);
	static_assert(offsetof(BSGeometryListCullingProcess, alphaGroupEndIndices) == 0x1D0);
	static_assert(offsetof(BSGeometryListCullingProcess, alphaGroupBounds) == 0x1E8);
	static_assert(offsetof(BSGeometryListCullingProcess, alphaGroupFlags) == 0x200);
	static_assert(offsetof(BSGeometryListCullingProcess, currentBound) == 0x218);
	static_assert(offsetof(BSGeometryListCullingProcess, currentAccumulatorIndex) == 0x220);
	static_assert(sizeof(BSGeometryListCullingProcess) == 0x228);
}
