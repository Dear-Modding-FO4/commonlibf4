#pragma once

namespace RE
{
	class BSLight;
	class BSShadowDirectionalLight;

	// NiNode base is unmapped; only proven fields are declared.
	class __declspec(novtable) ShadowSceneNode
	{
	public:
		// members
		std::byte                 field_0x000[0x1F8];      // 000 - NiNode base
		BSLight*                  sunLight;                // 1F8
		std::byte                 field_0x200[0x8];        // 200
		BSShadowDirectionalLight* directionalShadowLight;  // 208
	};
	static_assert(offsetof(ShadowSceneNode, sunLight) == 0x1F8);
	static_assert(offsetof(ShadowSceneNode, directionalShadowLight) == 0x208);
}
