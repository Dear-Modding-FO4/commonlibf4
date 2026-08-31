#pragma once

#include "RE/B/BSTArray.h"
#include "RE/B/BSTHashMap.h"
#include "RE/T/TESFile.h"

namespace RE
{
	class TESForm;

	class ConstructFormData
	{
	public:
		// members
		TESForm*      pForm;   // 00
		std::uint32_t iFlags;  // 08
	};
	static_assert(sizeof(ConstructFormData) == 0x10);

	class BGSConstructedForms
	{
	public:
		// members
		BSTArray<ConstructFormData, BSTArrayHeapAllocator> FormsArray[3];  // 00
	};
	static_assert(sizeof(BGSConstructedForms) == 0x48);

	class BGSConstructFormsMap :
		public BSTHashMap<std::uint32_t, ConstructFormData>  // 00
	{
	public:
		// members
		std::uint32_t iFlags;  // 30
	};
	static_assert(sizeof(BGSConstructFormsMap) == 0x38);

	class BGSConstructCellsMap :
		public BSTHashMap<std::uint32_t, BGSConstructFormsMap*>  // 00
	{};
	static_assert(sizeof(BGSConstructCellsMap) == 0x30);

	class BGSConstructCellSubBlocksMap :
		public BSTHashMap<std::uint32_t, BGSConstructCellsMap*>  // 00
	{};
	static_assert(sizeof(BGSConstructCellSubBlocksMap) == 0x30);

	class BGSConstructCellBlocksMap :
		public BSTHashMap<std::uint32_t, BGSConstructCellSubBlocksMap*>  // 00
	{
	public:
		// members
		BGSConstructFormsMap* pPersistentCell;  // 30
		bool                  bExteriors;       // 38
	};
	static_assert(sizeof(BGSConstructCellBlocksMap) == 0x40);

	class BGSConstructWorldSpacesMap :
		public BSTHashMap<std::uint32_t, BGSConstructCellBlocksMap*>  // 00
	{};
	static_assert(sizeof(BGSConstructWorldSpacesMap) == 0x30);

	class BGSConstructFormsInFileMap :
		public BSTHashMap<std::uint32_t, BGSConstructFormsMap*>  // 00
	{
	public:
		// members
		BGSConstructCellBlocksMap*  pInteriorCells;  // 30
		BGSConstructWorldSpacesMap* pWorldSpaces;    // 38
		std::uint32_t               iCount;          // 40
	};
	static_assert(sizeof(BGSConstructFormsInFileMap) == 0x48);

	class BGSConstructFormsInAllFilesMap :
		public BSTHashMap<TESFile*, BGSConstructFormsInFileMap*>  // 00
	{
	public:
		// members
		BGSConstructedForms ConstructedForms;  // 30
		std::uint32_t       iCount;            // 78
	};
	static_assert(sizeof(BGSConstructFormsInAllFilesMap) == 0x80);

	class BGSReconstructFormsInAllFilesMap :
		public BGSConstructFormsInAllFilesMap  // 00
	{};
	static_assert(sizeof(BGSReconstructFormsInAllFilesMap) == 0x80);
}
