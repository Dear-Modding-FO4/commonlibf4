#pragma once

namespace RE::BSStreamer
{
	// In-memory stream handed to BSShaderData::LoadBinary; the cursor is a raw pointer on OG, NG and AE.
	class ScrapStreamer
	{
	public:
		// members
		std::byte*    buffer;  // 00
		std::uint32_t length;  // 08
		std::byte*    cursor;  // 10
		std::uint16_t unk18;   // 18
	};
	static_assert(sizeof(ScrapStreamer) == 0x20);
	static_assert(offsetof(ScrapStreamer, cursor) == 0x10);
}
