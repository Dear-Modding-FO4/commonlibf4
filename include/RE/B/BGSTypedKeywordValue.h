#pragma once

#include "RE/K/KeywordType.h"
#include "RE/M/MemoryManager.h"

namespace RE
{
	namespace detail
	{
		[[nodiscard]] BGSKeyword*   BGSKeywordGetTypedKeywordByIndex(KeywordType a_type, std::uint16_t a_index);
		[[nodiscard]] std::uint16_t BGSKeywordGetIndexForTypedKeyword(BGSKeyword* a_keyword, KeywordType a_type);
	}

	template <KeywordType TYPE>
	class BGSTypedKeywordValue
	{
	public:
		// members
		std::uint16_t keywordIndex;  // 0
	};

	template <KeywordType TYPE>
	class BGSTypedKeywordValueArray
	{
	public:
		void AddKeyword(BGSKeyword* a_keyword)
		{
			if (a_keyword && !HasKeyword(a_keyword) && detail::BGSKeywordGetIndexForTypedKeyword(a_keyword, TYPE) != 0xFFFF) {
				MemoryManager&              mm = MemoryManager::GetSingleton();
				BGSTypedKeywordValue<TYPE>* newArray = (BGSTypedKeywordValue<TYPE>*)mm.Allocate(2 * (size + 1), 0, false);
				for (int i = 0; i < size; ++i) {
					newArray[i] = array[i];
				}
				BGSTypedKeywordValue<TYPE> newValue;
				newValue.keywordIndex = detail::BGSKeywordGetIndexForTypedKeyword(a_keyword, TYPE);
				newArray[size] = newValue;
				mm.Deallocate(array, false);
				array = newArray;
				++size;
			}
		}

		bool RemoveKeyword(BGSKeyword* a_keyword)
		{
			for (std::uint32_t i = 0; i < size; ++i) {
				if (detail::BGSKeywordGetTypedKeywordByIndex(TYPE, array[i].keywordIndex) != a_keyword) {
					continue;
				}

				for (std::uint32_t j = i + 1; j < size; ++j) {
					array[j - 1] = array[j];
				}
				--size;
				if (size == 0) {
					MemoryManager::GetSingleton().Deallocate(array, false);
					array = nullptr;
				}
				return true;
			}
			return false;
		}

		[[nodiscard]] bool HasKeyword(BGSKeyword* a_keyword)
		{
			for (std::uint32_t i = 0; i < size; ++i) {
				const auto kywd = detail::BGSKeywordGetTypedKeywordByIndex(TYPE, array[i].keywordIndex);
				if (kywd == a_keyword) {
					return true;
				}
			}
			return false;
		}

		// members
		BGSTypedKeywordValue<TYPE>* array;  // 00
		std::uint32_t               size;   // 08
	};
}
