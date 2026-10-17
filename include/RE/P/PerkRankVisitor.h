#pragma once

namespace RE
{
	class PerkRankData;

	class __declspec(novtable) PerkRankVisitor
	{
	public:
		virtual std::int32_t Visit(PerkRankData* a_perkRank) = 0;  // 00
	};
	static_assert(sizeof(PerkRankVisitor) == 0x8);
}
