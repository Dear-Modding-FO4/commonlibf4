#pragma once

#include "RE/N/NiNode.h"
#include "RE/N/NiTFlags.h"

namespace RE
{
	class __declspec(novtable) alignas(0x10) NiBillboardNode :
	    public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBillboardNode };
		static constexpr auto VTABLE{ VTABLE::NiBillboardNode };
		static constexpr auto Ni_RTTI{ Ni_RTTI::NiBillboardNode };

		virtual ~NiBillboardNode();

		[[nodiscard]] static NiBillboardNode* CreateObject()
		{
			using func_t = decltype(&NiBillboardNode::CreateObject);
			static REL::Relocation<func_t> func{ ID::NiBillboardNode::CreateObject };
			return func();
		}

		[[nodiscard]] std::uint16_t GetMode() const noexcept
		{
			return flags.flags & 7;
		}

		enum class FaceMode
		{
			kAlwaysFaceCamera = 0x0,
			kRotateAboutUp = 0x1,
			kRigidFaceCamera = 0x3,
			kAlwaysFaceCenter = 0x4,
			kBSRotateAboutUp = 0x5
		};

		// members
		NiTFlags<std::uint16_t, NiBillboardNode> flags;  // 140
	};
	static_assert(offsetof(NiBillboardNode, flags) == 0x140);
	static_assert(sizeof(NiBillboardNode) == 0x150);
}
