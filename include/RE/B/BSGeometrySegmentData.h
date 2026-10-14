#pragma once

namespace RE
{
	class BSGeometrySegmentData
	{
	public:
		void EnableAllSegments()
		{
			using func_t = decltype(&BSGeometrySegmentData::EnableAllSegments);
			static REL::Relocation<func_t> func{ ID::BSGeometrySegmentData::EnableAllSegments };
			return func(this);
		}

		void EnableSegment(std::uint32_t a_segment, std::uint8_t a_subsegment, bool a_refresh)
		{
			using func_t = decltype(&BSGeometrySegmentData::EnableSegment);
			static REL::Relocation<func_t> func{ ID::BSGeometrySegmentData::EnableSegment };
			return func(this, a_segment, a_subsegment, a_refresh);
		}

		void DisableSegment(std::uint32_t a_segment, std::uint8_t a_subsegment, bool a_refresh)
		{
			using func_t = decltype(&BSGeometrySegmentData::DisableSegment);
			static REL::Relocation<func_t> func{ ID::BSGeometrySegmentData::DisableSegment };
			return func(this, a_segment, a_subsegment, a_refresh);
		}

		[[nodiscard]] bool IsEnabled(std::uint32_t a_segment, std::uint8_t a_subsegment)
		{
			using func_t = decltype(&BSGeometrySegmentData::IsEnabled);
			static REL::Relocation<func_t> func{ ID::BSGeometrySegmentData::GetSegmentEnabled };
			return func(this, a_segment, a_subsegment);
		}

		[[nodiscard]] bool IsEmpty(std::uint32_t a_segment, std::uint8_t a_subsegment)
		{
			using func_t = decltype(&BSGeometrySegmentData::IsEmpty);
			static REL::Relocation<func_t> func{ ID::BSGeometrySegmentData::GetSegmentEmpty };
			return func(this, a_segment, a_subsegment);
		}

		void UpdateDrawData()
		{
			using func_t = decltype(&BSGeometrySegmentData::UpdateDrawData);
			static REL::Relocation<func_t> func{ ID::BSGeometrySegmentData::UpdateDrawData };
			return func(this);
		}

		[[nodiscard]] std::uint32_t GetSegmentCount() const noexcept
		{
			return singleSegment ? 1 : segmentCount;
		}

		// members
		std::byte     unk00[0x2C];    // 00
		std::uint32_t segmentCount;   // 2C
		std::byte     unk30[0x0C];    // 30
		bool          dirty;          // 3C
		bool          singleSegment;  // 3D
	};
	static_assert(offsetof(BSGeometrySegmentData, segmentCount) == 0x2C);
	static_assert(offsetof(BSGeometrySegmentData, dirty) == 0x3C);
	static_assert(offsetof(BSGeometrySegmentData, singleSegment) == 0x3D);
}
