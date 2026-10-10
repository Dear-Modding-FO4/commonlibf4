#pragma once

#include "RE/B/BSSpinLock.h"
#include "RE/N/NiLight.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class BSFadeNode;
	class NiCullingProcess;

	// Mapped native prefix; the complete allocation extent is not established.
	class __declspec(novtable) BSLight : public NiRefObject
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLight };
		static constexpr auto VTABLE{ VTABLE::BSLight };

		BSLight() = delete;
		BSLight(const BSLight&) = delete;
		BSLight(BSLight&&) = delete;
		BSLight& operator=(const BSLight&) = delete;
		BSLight& operator=(BSLight&&) = delete;

		std::uint32_t TestFrustumCull(NiCullingProcess* a_process)
		{
			using func_t = decltype(&BSLight::TestFrustumCull);
			static REL::Relocation<func_t> func{ ID::BSLight::TestFrustumCull };
			return func(this, a_process);
		}

		void AddFadeNode(BSFadeNode* a_node)
		{
			using func_t = decltype(&BSLight::AddFadeNode);
			static REL::Relocation<func_t> func{ ID::BSLight::AddFadeNode };
			func(this, a_node);
		}

		void AddFadeNodeLocked(BSFadeNode* a_node)
		{
			using func_t = decltype(&BSLight::AddFadeNodeLocked);
			static REL::Relocation<func_t> func{ ID::BSLight::AddFadeNodeLocked };
			func(this, a_node);
		}

		float GetLuminanceAtPoint(NiPoint3& a_point, NiLight* a_ignoreLight)
		{
			using func_t = decltype(&BSLight::GetLuminanceAtPoint);
			static REL::Relocation<func_t> func{ ID::BSLight::GetLuminanceAtPoint };
			return func(this, a_point, a_ignoreLight);
		}

		float              currentFade;                // 010
		std::byte          unk014[4];                  // 014
		std::uint32_t      cullResult;                 // 018
		std::byte          unk01C[0x84];               // 01C
		float              angularExponent;            // 0A0
		std::byte          unk0A4[0x14];               // 0A4
		NiPointer<NiLight> light;                      // 0B8
		void*              associationHead;            // 0C0
		void*              associationTail;            // 0C8
		std::uint32_t      associationCount;           // 0D0
		std::byte          unk0D4[4];                  // 0D4
		void*              associationAllocator;       // 0D8
		BSSpinLock         associationLock;            // 0E0
		std::byte          unk0E8[0x70];               // 0E8
		void*              projectedTexture;           // 158
		std::byte          unk160[0x11];               // 160
		bool               specialList;                // 171
		bool               field172;                   // 172 - creation policy is unnamed
		bool               field173;                   // 173 - creation policy is unnamed
		std::byte          unk174;                     // 174
		bool               field175;                   // 175
		bool               field176;                   // 176
		bool               field177;                   // 177
		bool               specular;                   // 178
		bool               attenuationOnly;            // 179
		bool               zeroRoughness;              // 17A
		bool               suppressRim;                // 17B
		std::byte          unk17C[2];                  // 17C
		bool               excludeFromPointLuminance;  // 17E
		std::byte          unk17F;                     // 17F
		std::uint32_t      shape;                      // 180
	};
	static_assert(offsetof(BSLight, currentFade) == 0x10);
	static_assert(offsetof(BSLight, cullResult) == 0x18);
	static_assert(offsetof(BSLight, angularExponent) == 0xA0);
	static_assert(offsetof(BSLight, light) == 0xB8);
	static_assert(offsetof(BSLight, associationHead) == 0xC0);
	static_assert(offsetof(BSLight, associationTail) == 0xC8);
	static_assert(offsetof(BSLight, associationCount) == 0xD0);
	static_assert(offsetof(BSLight, associationAllocator) == 0xD8);
	static_assert(offsetof(BSLight, associationLock) == 0xE0);
	static_assert(offsetof(BSLight, projectedTexture) == 0x158);
	static_assert(offsetof(BSLight, specialList) == 0x171);
	static_assert(offsetof(BSLight, field172) == 0x172);
	static_assert(offsetof(BSLight, field173) == 0x173);
	static_assert(offsetof(BSLight, field175) == 0x175);
	static_assert(offsetof(BSLight, field176) == 0x176);
	static_assert(offsetof(BSLight, field177) == 0x177);
	static_assert(offsetof(BSLight, specular) == 0x178);
	static_assert(offsetof(BSLight, attenuationOnly) == 0x179);
	static_assert(offsetof(BSLight, zeroRoughness) == 0x17A);
	static_assert(offsetof(BSLight, suppressRim) == 0x17B);
	static_assert(offsetof(BSLight, excludeFromPointLuminance) == 0x17E);
	static_assert(offsetof(BSLight, shape) == 0x180);
}
