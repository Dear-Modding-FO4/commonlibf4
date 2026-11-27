#pragma once

namespace RE
{
	class NiCamera;

	class NiUpdateData
	{
	public:
		enum class Flag : std::uint32_t
		{
			kNone = 0,
			kDirty = 1u << 0,
			kSkipUpdateUpwardPass = 1u << 9,
			kDisableCollision = 1u << 11
		};

		[[nodiscard]] constexpr bool HasFlag(Flag a_flag) const noexcept
		{
			return (flags & static_cast<std::uint32_t>(a_flag)) != 0;
		}

		constexpr void SetFlag(Flag a_flag, bool a_set = true) noexcept
		{
			const auto mask = static_cast<std::uint32_t>(a_flag);
			flags = a_set ? flags | mask : flags & ~mask;
		}

		// members
		float         time{ 0.0f };        // 00
		NiCamera*     camera{ nullptr };   // 08
		std::uint32_t flags{ 0 };          // 10
		std::uint32_t renderObjects{ 0 };  // 14
		std::uint32_t fadeNodeDepth{ 0 };  // 18
	};
	static_assert(sizeof(NiUpdateData) == 0x20);
}
