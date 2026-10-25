#pragma once

#include "RE/N/NiColor.h"
#include "RE/N/NiPointer.h"
#include "RE/S/SkyObject.h"

namespace RE
{
	class BSGeometry;
	class NiTexture;

	class __declspec(novtable) Clouds :
		public SkyObject
	{
	public:
		static constexpr auto RTTI{ RTTI::Clouds };
		static constexpr auto VTABLE{ VTABLE::Clouds };

		static constexpr std::size_t kMaxLayers = 32;

		virtual ~Clouds();

		// members
		NiPointer<BSGeometry> clouds[kMaxLayers];            // 010
		std::uint64_t         textureHandles[kMaxLayers];    // 110
		NiPointer<NiTexture>  incomingTextures[kMaxLayers];  // 210
		NiColor               colors[kMaxLayers];            // 310
		float                 alphas[kMaxLayers];            // 490
		std::uint16_t         numLayers;                     // 510
	};
	static_assert(offsetof(Clouds, clouds) == 0x10);
	static_assert(offsetof(Clouds, textureHandles) == 0x110);
	static_assert(offsetof(Clouds, incomingTextures) == 0x210);
	static_assert(offsetof(Clouds, colors) == 0x310);
	static_assert(offsetof(Clouds, alphas) == 0x490);
	static_assert(offsetof(Clouds, numLayers) == 0x510);
	static_assert(sizeof(Clouds) == 0x518);
}
