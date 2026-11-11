#pragma once

#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTEvent.h"
#include "RE/B/BSTSingleton.h"
#include "RE/E/ENUM_FORM_ID.h"
#include "RE/N/NiTArray.h"
#include "RE/N/NiTList.h"
#include "RE/R/RelocateMember.h"
#include "RE/T/TESFileCollection.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class BGSHotloadCompletedEvent;
	class NEW_REFR_DATA;
	class TESFile;
	class TESObjectList;
	class TESRegionDataManager;
	class TESRegionList;

	class TESDataHandler :
		public BSTEventSource<BGSHotloadCompletedEvent>,  // 0000
		public BSTSingletonSDM<TESDataHandler>            // 0058
	{
	public:
		[[nodiscard]] static TESDataHandler* GetSingleton()
		{
			static REL::Relocation<TESDataHandler**> singleton{ ID::TESDataHandler::Singleton };
			return *singleton;
		}

		[[nodiscard]] bool AddFormToDataHandler(TESForm* a_form)
		{
			using func_t = decltype(&TESDataHandler::AddFormToDataHandler);
			static REL::Relocation<func_t> func{ ID::TESDataHandler::AddFormToDataHandler };
			return func(this, a_form);
		}

		[[nodiscard]] bool CheckModsLoaded(bool a_everModded)
		{
			using func_t = decltype(&TESDataHandler::CheckModsLoaded);
			static REL::Relocation<func_t> func{ ID::TESDataHandler::CheckModsLoaded };
			return func(this, a_everModded);
		}

		[[nodiscard]] ObjectRefHandle CreateReferenceAtLocation(NEW_REFR_DATA& a_data)
		{
			using func_t = decltype(&TESDataHandler::CreateReferenceAtLocation);
			static REL::Relocation<func_t> func{ ID::TESDataHandler::CreateReferenceAtLocation };
			return func(this, a_data);
		}

		template <class T>
		[[nodiscard]] BSTArray<T*>& GetFormArray() noexcept  //
			requires(std::derived_from<T, TESForm> &&
					 !std::is_pointer_v<T> &&
					 !std::is_reference_v<T>)
		{
			assert(T::FORM_ID < ENUM_FORM_ID::kTotal);
			return reinterpret_cast<BSTArray<T*>&>(formArrays[std::to_underlying(T::FORM_ID)]);
		}

		TESFormID LookupFormID(TESFormID a_rawFormID, std::string_view a_modName)
		{
			auto file = LookupModByName(a_modName);
			if (!file || file->compileIndex == 0xFF) {
				return 0;
			}

			TESFormID formID = file->compileIndex << 24;
			formID += file->smallFileCompileIndex << 12;
			formID += a_rawFormID;

			return formID;
		}

		TESForm* LookupForm(TESFormID a_rawFormID, std::string_view a_modName)
		{
			auto formID = LookupFormID(a_rawFormID, a_modName);
			return formID != 0 ? TESForm::GetFormByID(formID) : nullptr;
		}

		template <class T>
		T* LookupForm(TESFormID a_rawFormID, std::string_view a_modName)
		{
			auto form = LookupForm(a_rawFormID, a_modName);
			if (!form) {
				return nullptr;
			}

			return form->Is(T::FORM_ID) ? form->As<T>() : nullptr;
		}

		const TESFile* LookupModByName(std::string_view a_modName)
		{
			for (auto& file : files) {
				if (a_modName.size() == strlen(file->filename) &&
					_strnicmp(file->filename, a_modName.data(), a_modName.size()) == 0) {
					return file;
				}
			}
			return nullptr;
		}

		std::optional<std::uint8_t> GetModIndex(std::string_view a_modName)
		{
			auto mod = LookupModByName(a_modName);
			return mod ? std::make_optional(mod->compileIndex) : std::nullopt;
		}

		const TESFile* LookupLoadedModByName(std::string_view a_modName)
		{
			for (auto& file : compiledFileCollection.files) {
				if (a_modName.size() == strlen(file->filename) &&
					_strnicmp(file->filename, a_modName.data(), a_modName.size()) == 0) {
					return file;
				}
			}
			return nullptr;
		}

		const TESFile* LookupLoadedModByIndex(std::uint8_t a_index)
		{
			for (auto& file : compiledFileCollection.files) {
				if (file->compileIndex == a_index) {
					return file;
				}
			}
			return nullptr;
		}

		std::optional<std::uint8_t> GetLoadedModIndex(std::string_view a_modName)
		{
			auto mod = LookupLoadedModByName(a_modName);
			return mod ? std::make_optional(mod->compileIndex) : std::nullopt;
		}

		const TESFile* LookupLoadedLightModByName(std::string_view a_modName)
		{
			for (auto& smallFile : compiledFileCollection.smallFiles) {
				if (a_modName.size() == strlen(smallFile->filename) &&
					_strnicmp(smallFile->filename, a_modName.data(), a_modName.size()) == 0) {
					return smallFile;
				}
			}
			return nullptr;
		}

		const TESFile* LookupLoadedLightModByIndex(std::uint16_t a_index)
		{
			for (auto& smallFile : compiledFileCollection.smallFiles) {
				if (smallFile->smallFileCompileIndex == a_index) {
					return smallFile;
				}
			}
			return nullptr;
		}

		std::optional<std::uint16_t> GetLoadedLightModIndex(std::string_view a_modName)
		{
			auto mod = LookupLoadedLightModByName(a_modName);
			return mod ? std::make_optional(mod->smallFileCompileIndex) : std::nullopt;
		}

		bool IsFormIDInuse(TESFormID a_formID)
		{
			using func_t = decltype(&TESDataHandler::IsFormIDInuse);
			static REL::Relocation<func_t> func{ ID::TESDataHandler::IsFormIDInuse };
			return func(this, a_formID);
		}

		struct RuntimeData
		{
			BSTArray<std::uint32_t> releasedFormIDArray;    // 00
			bool                    masterSave;             // 18
			bool                    blockSave;              // 19
			bool                    saveLoadGame;           // 1A
			bool                    autoSaving;             // 1B
			bool                    exportingPlugin;        // 1C
			bool                    clearingData;           // 1D
			bool                    hasDesiredFiles;        // 1E
			bool                    checkingModels;         // 1F
			bool                    loadingFiles;           // 20
			bool                    dontRemoveIDs;          // 21
			char                    gameSettingsLoadState;  // 22
			TESRegionDataManager*   regionDataManager;      // 28
		};
		static_assert(offsetof(RuntimeData, masterSave) == 0x18);
		static_assert(offsetof(RuntimeData, regionDataManager) == 0x28);
		static_assert(sizeof(RuntimeData) == 0x30);

		[[nodiscard]] RuntimeData& GetRuntimeData() noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0xFF0, 0xFF8, 0xFF8 });
		}

		[[nodiscard]] const RuntimeData& GetRuntimeData() const noexcept
		{
			return REL::RelocateMember<RuntimeData>(this, REL::Offset{ 0xFF0, 0xFF8, 0xFF8 });
		}

		// members
		TESObjectList*                    objectList;                                            // 0060
		BSTArray<TESForm*>                formArrays[std::to_underlying(ENUM_FORM_ID::kTotal)];  // 0068
		TESRegionList*                    regionList;                                            // 0F50
		NiTPrimitiveArray<TESObjectCELL*> interiorCells;                                         // 0F58
		NiTPrimitiveArray<BGSAddonNode*>  addonNodes;                                            // 0F70
		NiTList<TESForm*>                 badForms;                                              // 0F88
		std::uint32_t                     nextID;                                                // 0FA0
		TESFile*                          activeFile;                                            // 0FA8
		BSSimpleList<TESFile*>            files;                                                 // 0FB0
		TESFileCollection                 compiledFileCollection;                                // 0FC0

	private:
		// Preserve the OG storage extent; NG/AE insert a byte flag at 0FF0.
		std::byte unkFF0[0x30];  // 0FF0
	};
	static_assert(offsetof(TESDataHandler, compiledFileCollection) == 0xFC0);
	static_assert(sizeof(TESDataHandler) == 0x1020);
}
