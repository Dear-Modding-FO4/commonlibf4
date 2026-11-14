#pragma once

namespace RE
{
	class BSNavmeshTriangle
	{
	public:
		[[nodiscard]] bool IsPreferred() const noexcept { return (static_cast<std::uint8_t>(traversalFlags) & 0x2) != 0; }

		// members
		std::uint16_t vertices[3];     // 00
		std::uint16_t triangles[3];    // 06
		float         height;          // 0C
		std::uint32_t triangleFlags;   // 10
		std::int8_t   traversalFlags;  // 14
	};
	static_assert(sizeof(BSNavmeshTriangle) == 0x18);
}
