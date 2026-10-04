#pragma once

#include "RE/B/BaseFormComponent.h"
#include "RE/C/ContainerObject.h"
#include "RE/E/ENUM_FORM_ID.h"

namespace RE
{
	class __declspec(novtable) TESContainer :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESContainer };
		static constexpr auto VTABLE{ VTABLE::TESContainer };

		void CopyObjectList(const std::vector<ContainerObject*>& a_copiedData)
		{
			const auto oldData = containerObjects;

			const auto newSize = a_copiedData.size();
			const auto newData = calloc<ContainerObject*>(newSize);
			std::ranges::copy(a_copiedData, newData);

			numContainerObjects = static_cast<std::uint32_t>(newSize);
			containerObjects = newData;

			free(oldData);
		}

		void ForEachContainerObject(std::function<bool(ContainerObject&)> a_fn) const
		{
			for (std::uint32_t i = 0; i < numContainerObjects; ++i) {
				auto entry = containerObjects[i];
				if (entry) {
					if (!a_fn(*entry)) {
						break;
					}
				}
			}
		}

		bool AddObject(TESBoundObject* a_object, std::int32_t a_count, TESForm* a_owner)
		{
			bool added = false;
			for (std::uint32_t i = 0; i < numContainerObjects; ++i) {
				if (const auto entry = containerObjects[i]; entry && entry->obj == a_object) {
					entry->count += a_count;
					added = true;
					break;
				}
			}
			if (!added) {
				std::vector<ContainerObject*> copiedData{ containerObjects, containerObjects + numContainerObjects };
				const auto                    newObj = new ContainerObject(a_object, a_count, a_owner);
				copiedData.push_back(newObj);
				CopyObjectList(copiedData);
				return true;
			}
			return added;
		}

		bool AddObjectsToContainer(std::map<TESBoundObject*, std::int32_t>& a_objects, TESForm* a_owner)
		{
			for (std::uint32_t i = 0; i < numContainerObjects; ++i) {
				if (const auto entry = containerObjects[i]; entry && entry->obj) {
					if (auto it = a_objects.find(entry->obj); it != a_objects.end()) {
						entry->count += it->second;
						a_objects.erase(it);
					}
				}
			}
			if (!a_objects.empty()) {
				std::vector<ContainerObject*> copiedData{ containerObjects, containerObjects + numContainerObjects };
				for (auto& [object, count] : a_objects) {
					const auto newObj = new ContainerObject(object, count, a_owner);
					copiedData.push_back(newObj);
				}
				CopyObjectList(copiedData);
			}
			return true;
		}

		[[nodiscard]] static bool ContainerCanHoldType(ENUM_FORM_ID a_type)
		{
			using func_t = decltype(&TESContainer::ContainerCanHoldType);
			static REL::Relocation<func_t> func{ ID::TESContainer::ContainerCanHoldType };
			return func(a_type);
		}

		[[nodiscard]] static bool ContainerCanHoldForm(const TESForm* a_form)
		{
			using func_t = decltype(&TESContainer::ContainerCanHoldForm);
			static REL::Relocation<func_t> func{ ID::TESContainer::ContainerCanHoldForm };
			return func(a_form);
		}

		ContainerObject* AddObjectNative(TESBoundObject* a_object, std::int32_t a_count, const ContainerItemExtra* a_extra = nullptr)
		{
			using func_t = decltype(&TESContainer::AddObjectNative);
			static REL::Relocation<func_t> func{ ID::TESContainer::AddObject };
			return func(this, a_object, a_count, a_extra);
		}

		void RemoveContainerObject(ContainerObject* a_entry)
		{
			using func_t = decltype(&TESContainer::RemoveContainerObject);
			static REL::Relocation<func_t> func{ ID::TESContainer::RemoveContainerObject };
			return func(this, a_entry);
		}

		[[nodiscard]] bool HasObject(const TESBoundObject* a_object) const
		{
			using func_t = decltype(&TESContainer::HasObject);
			static REL::Relocation<func_t> func{ ID::TESContainer::HasObject };
			return func(this, a_object);
		}

		[[nodiscard]] std::int32_t GetObjectCount(const TESBoundObject* a_object) const
		{
			using func_t = decltype(&TESContainer::GetObjectCount);
			static REL::Relocation<func_t> func{ ID::TESContainer::GetObjectCount };
			return func(this, a_object);
		}

		std::uint32_t RemoveObject(const TESBoundObject* a_object)
		{
			std::uint32_t removed = 0;
			for (std::uint32_t i = 0; i < numContainerObjects;) {
				if (const auto entry = containerObjects[i]; entry && entry->obj == a_object) {
					RemoveContainerObject(entry);
					++removed;
				} else {
					++i;
				}
			}
			return removed;
		}

		// members
		ContainerObject** containerObjects;     // 08
		std::uint32_t     numContainerObjects;  // 10
	};
	static_assert(sizeof(TESContainer) == 0x18);
}
