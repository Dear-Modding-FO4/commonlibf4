#include "RE/T/TESLeveledList.h"

#include "RE/C/ContainerItemExtra.h"
#include "RE/L/LEVELED_OBJECT.h"
#include "RE/M/MemoryManager.h"

namespace RE
{
	std::uint32_t TESLeveledList::RemoveLeveledObjects(const std::function<bool(const LEVELED_OBJECT&)>& a_predicate)
	{
		if (!leveledLists || baseListCount == 0 || scriptListCount != 0) {
			return 0;
		}

		const std::uint32_t oldCount = baseListCount;
		const auto          old = leveledLists;

		std::vector<bool> remove(oldCount, false);
		std::uint32_t     removed = 0;
		for (std::uint32_t i = 0; i < oldCount; ++i) {
			if (a_predicate(old[i])) {
				remove[i] = true;
				++removed;
			}
		}

		if (removed == 0) {
			return 0;
		}

		const std::uint32_t newCount = oldCount - removed;
		LEVELED_OBJECT*     replacement = nullptr;
		if (newCount > 0) {
			const auto block = static_cast<std::uint64_t*>(malloc(sizeof(std::uint64_t) + sizeof(LEVELED_OBJECT) * newCount));
			if (!block) {
				return 0;
			}

			block[0] = newCount;
			replacement = reinterpret_cast<LEVELED_OBJECT*>(block + 1);
			std::uint32_t next = 0;
			for (std::uint32_t i = 0; i < oldCount; ++i) {
				if (!remove[i]) {
					std::memcpy(&replacement[next++], &old[i], sizeof(LEVELED_OBJECT));
					std::memset(&old[i], 0, sizeof(LEVELED_OBJECT));
				}
			}
		}

		leveledLists = replacement;
		baseListCount = static_cast<std::uint8_t>(newCount);
		for (std::uint32_t i = 0; i < oldCount; ++i) {
			delete old[i].itemExtra;
		}
		free(reinterpret_cast<std::uint64_t*>(old) - 1);
		return removed;
	}
}
