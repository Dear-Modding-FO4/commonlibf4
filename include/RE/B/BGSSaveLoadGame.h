#pragma once

#include "RE/B/BGSChangeFlags.h"
#include "RE/B/BGSConstructFormsInAllFilesMap.h"
#include "RE/B/BGSLoadFormData.h"
#include "RE/B/BGSSaveLoadChangesMap.h"
#include "RE/B/BGSSaveLoadFormIDMap.h"
#include "RE/B/BGSSaveLoadHistory.h"
#include "RE/B/BGSSaveLoadQueuedSubBufferMap.h"
#include "RE/B/BGSSaveLoadReferencesMap.h"
#include "RE/B/BSFixedString.h"
#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSTArray.h"
#include "RE/T/TESFileCollection.h"

namespace RE
{
	class Actor;
	class TESForm;
	class TESObjectREFR;

	class BGSSaveLoadGame
	{
	public:
		[[nodiscard]] static BGSSaveLoadGame* GetSingleton()
		{
			REL::Relocation<BGSSaveLoadGame**> singleton{ ID::BGSSaveLoadGame::Singleton };
			return *singleton;
		}

		bool GetChange(TESForm* a_form, BGSChangeFlags a_flags)
		{
			using func_t = decltype(&BGSSaveLoadGame::GetChange);
			static REL::Relocation<func_t> func{ ID::BGSSaveLoadGame::GetChange };
			return func(this, a_form, a_flags);
		}

		// members
		TESFileCollection                                                                SavedFiles;                          // 00
		BGSSaveLoadFormIDMap                                                             WorldspaceFormIDMap;                 // 30
		BSTHashMap<std::uint32_t, BSPointerHandle<Actor, BSUntypedPointerHandle<21, 5>>> QueuedInitPackageLocationsActorMap;  // 98
		BSTArray<BSPointerHandle<TESObjectREFR, BSUntypedPointerHandle<21, 5>>>          QueuedMoveToEditorLocationArray;     // C8
		BGSSaveLoadReferencesMap                                                         ReferencesMap;                       // E0
		BSTHashMap<std::uint32_t, std::uint32_t>                                         ChangedFormIDMap;                    // 178
		BGSReconstructFormsInAllFilesMap                                                 ReconstructForms;                    // 1A8
		BGSSaveLoadQueuedSubBufferMap                                                    QueuedSubBuffersMap;                 // 228
		BGSSaveLoadFormIDMap                                                             FormIDMap;                           // 2B8
		BGSSaveLoadHistory                                                               History;                             // 320
		BSTArray<BGSLoadFormData*>                                                       FormDataArray;                       // 338
		BGSSaveLoadChangesMap*                                                           pChangesMap;                         // 350
		BGSSaveLoadChangesMap*                                                           pOldChangesMap;                      // 358
		std::uint32_t                                                                    iGlobalFlags;                        // 360
		std::uint8_t                                                                     cCurrentMinorVersion;                // 364
		BSFixedString                                                                    SavedGameVersion;                    // 368
	};
	static_assert(sizeof(BGSSaveLoadGame) == 0x370);
}
