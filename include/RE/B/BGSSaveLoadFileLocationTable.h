#pragma once

namespace RE
{
	class BGSSaveLoadFileLocationTable
	{
	public:
		// members
		std::uint32_t formIDArrayOffset;         // 00
		std::uint32_t historyOffset;             // 04
		std::uint32_t globalDataTable1Offset;    // 08
		std::uint32_t globalDataTable2Offset;    // 0C
		std::uint32_t changeFormsOffset;         // 10
		std::uint32_t globalDataTable3Offset;    // 14
		std::uint32_t globalDataTable1Count;     // 18
		std::uint32_t globalDataTable2Count;     // 1C
		std::uint32_t globalDataTable3Count;     // 20
		std::uint32_t changeFormCount;           // 24
		std::uint32_t skipAfterChangeForms;      // 28
		std::uint32_t unused[14];                // 2C
	};
	static_assert(sizeof(BGSSaveLoadFileLocationTable) == 0x64);
}
