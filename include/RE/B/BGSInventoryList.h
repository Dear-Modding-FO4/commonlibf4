#pragma once

#include "RE/B/BGSInventoryItem.h"
#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTEvent.h"
#include "RE/E/ExtraDataList.h"
#include "RE/M/MemoryManager.h"

namespace RE
{
	class TESContainer;

	namespace BGSInventoryListEvent
	{
		class Event;
	}

	class BGSInventoryList :
		public BSTEventSource<BGSInventoryListEvent::Event>  // 00
	{
	public:
		BGSInventoryList(const TESContainer* a_container, ObjectRefHandle a_owner)
		{
			auto native_handle = a_owner.get_handle();
			ctor(a_container, &native_handle);
		}

		F4_HEAP_REDEFINE_NEW(BGSInventoryList)

		[[nodiscard]] static bool StandardObjectCompareCallbackFn(TESBoundObject* a_lhs, TESBoundObject* a_rhs)
		{
			return a_lhs == a_rhs;
		}

		void FindAndWriteStackDataForItem(
			TESBoundObject*                            a_object,
			BGSInventoryItem::StackDataCompareFunctor& a_compareFunc,
			BGSInventoryItem::StackDataWriteFunctor&   a_writeFunc,
			bool (*a_objCompFn)(TESBoundObject*, TESBoundObject*) = StandardObjectCompareCallbackFn,
			bool a_alwaysContinue = false)
		{
			using func_t = decltype(&BGSInventoryList::FindAndWriteStackDataForItem);
			static REL::Relocation<func_t> func{ ID::BGSInventoryList::FindAndWriteStackDataForItem };
			return func(this, a_object, a_compareFunc, a_writeFunc, a_objCompFn, a_alwaysContinue);
		}

		// DOES NOT LOCK
		void ForEachStack(
			std::function<bool(BGSInventoryItem&)>                           a_filter,   // return true to iterate stacks
			std::function<bool(BGSInventoryItem&, BGSInventoryItem::Stack&)> a_continue  // return false to return control from function
		)
		{
			for (auto& elem : data) {
				if (a_filter(elem)) {
					for (auto stack = elem.stackData.get(); stack; stack = stack->nextStack.get()) {
						if (!a_continue(elem, *stack)) {
							return;
						}
					}
				}
			}
		}

		void BuildFromContainer(const TESContainer* a_container)
		{
			using func_t = decltype(&BGSInventoryList::BuildFromContainer);
			static REL::Relocation<func_t> func{ ID::BGSInventoryList::BuildFromContainer };
			return func(this, a_container);
		}
		
		void AddItemWithExtra(TESBoundObject* a_item, uint32_t a_itemCount, ExtraDataList* a_itemExtra,
			[[maybe_unused]] uint32_t a_unk = 0) noexcept
		{
			using func_t = decltype(&BGSInventoryList::AddItemWithExtra);
			static REL::Relocation<func_t> func{ ID::BGSInventoryList::AddItemWithExtra };
			return func(this, a_item, a_itemCount, a_itemExtra, a_unk);
		}

		void AddItem(TESBoundObject* a_item, uint32_t a_itemCount) noexcept
		{
			auto& memMgr = MemoryManager::GetSingleton();
			auto extraList = (ExtraDataList*)memMgr.Allocate(sizeof(ExtraDataList), 16, true);
			if (!extraList)
				return;

			ExtraDataList::Create(extraList);
			return AddItemWithExtra(a_item, a_itemCount, extraList);
		}

		void RemoveItem(TESBoundObject* a_item, uint32_t a_unk0, uint32_t a_itemCount,
			[[maybe_unused]] bool a_unk1 = false) noexcept
		{
			using func_t = decltype(&BGSInventoryList::RemoveItem);
			static REL::Relocation<func_t> func{ ID::BGSInventoryList::RemoveItem };
			return func(this, a_item, a_unk0, a_itemCount, a_unk1);
		}

		void RemoveItem2(TESBoundObject* a_item, uint32_t a_itemCount) noexcept
		{
			return RemoveItem(a_item, 0, a_itemCount);
		}

		[[nodiscard]] uint32_t GetItemCount(TESBoundObject* a_item) const noexcept
		{
			using func_t = decltype(&BGSInventoryList::GetItemCount);
			static REL::Relocation<func_t> func{ ID::BGSInventoryList::GetItemCount };
			return func(this, a_item);
		}

		[[nodiscard]] uint32_t GetQuestItemCount(TESBoundObject* a_item) const noexcept
		{
			using func_t = decltype(&BGSInventoryList::GetQuestItemCount);
			static REL::Relocation<func_t> func{ ID::BGSInventoryList::GetQuestItemCount };
			return func(this, a_item);
		}

		[[nodiscard]] uint32_t FindItemIndex(TESBoundObject* a_item) const noexcept
		{
			using func_t = decltype(&BGSInventoryList::FindItemIndex);
			static REL::Relocation<func_t> func{ ID::BGSInventoryList::FindItemIndex };
			return func(this, a_item);
		}

		void Clear() noexcept
		{
			using func_t = decltype(&BGSInventoryList::Clear);
			static REL::Relocation<func_t> func{ ID::BGSInventoryList::Clear };
			return func(this);
		}

		// members
		BSTArray<BGSInventoryItem> data;          // 58
		float                      cachedWeight;  // 70
		ObjectRefHandle            owner;         // 74
		BSReadWriteLock            rwLock;        // 78

	private:
		void ctor(const TESContainer* a_container, std::uint32_t* a_owner)
		{
			using func_t = decltype(&BGSInventoryList::ctor);
			static REL::Relocation<func_t> func{ ID::BGSInventoryList::ctor };
			return func(this, a_container, a_owner);
		}
	};
	static_assert(sizeof(BGSInventoryList) == 0x80);
}
