#pragma once

#include "RE/N/NiColor.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class __declspec(novtable) NiParticlesData : public NiObject
	{
	public:
		static constexpr auto RTTI{ RTTI::NiParticlesData };
		static constexpr auto VTABLE{ VTABLE::NiParticlesData };
		static constexpr auto Ni_RTTI{ Ni_RTTI::NiParticlesData };

		NiParticlesData() = delete;

		std::byte     unk10[2];           // 10
		std::uint16_t vertexCount;        // 12
		std::uint16_t activeVertexCount;  // 14
		std::byte     unk16[0x22];        // 16
		NiPoint3*     vertices;           // 38
		NiColorA*     colors;             // 40
		float*        radii;              // 48
		float*        sizes;              // 50
		float*        field58;            // 58 - rotated-particle scalar array
		std::byte     unk60[0x30];        // 60 - other element types are unestablished
	};
	static_assert(sizeof(NiParticlesData) == 0x90);
	static_assert(offsetof(NiParticlesData, vertexCount) == 0x12);
	static_assert(offsetof(NiParticlesData, activeVertexCount) == 0x14);
	static_assert(offsetof(NiParticlesData, vertices) == 0x38);
	static_assert(offsetof(NiParticlesData, colors) == 0x40);
	static_assert(offsetof(NiParticlesData, radii) == 0x48);
	static_assert(offsetof(NiParticlesData, sizes) == 0x50);
	static_assert(offsetof(NiParticlesData, field58) == 0x58);
}
