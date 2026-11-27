#pragma once

namespace RE
{
	class BSNavmeshTriangle
	{
	public:
		enum class TriangleFlag : std::uint32_t
		{
			kEdge0_Link = 1 << 0,
			kEdge1_Link = 1 << 1,
			kEdge2_Link = 1 << 2,
			kDeleted = 1 << 5
		};

		enum class TraversalFlag : std::uint8_t
		{
			kPreferred = 1 << 1
		};

		[[nodiscard]] bool HasFlag(TriangleFlag a_flag) const noexcept { return (triangleFlags & static_cast<std::uint32_t>(a_flag)) != 0; }
		[[nodiscard]] bool IsDeleted() const noexcept { return HasFlag(TriangleFlag::kDeleted); }
		[[nodiscard]] bool HasEdgeLink(std::uint32_t a_edge) const noexcept { return a_edge < 3 && (triangleFlags & (1U << a_edge)) != 0; }
		[[nodiscard]] bool IsPreferred() const noexcept { return (static_cast<std::uint8_t>(traversalFlags) & static_cast<std::uint8_t>(TraversalFlag::kPreferred)) != 0; }

		// members
		std::uint16_t vertices[3];     // 00
		std::uint16_t triangles[3];    // 06
		float         height;          // 0C
		std::uint32_t triangleFlags;   // 10
		std::int8_t   traversalFlags;  // 14
	};
	static_assert(sizeof(BSNavmeshTriangle) == 0x18);
}
