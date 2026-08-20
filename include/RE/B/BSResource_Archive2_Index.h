#pragma once

#include "RE/B/BSBTreeFile.h"
#include "RE/B/BSFixedString.h"
#include "RE/B/BSResource_AsyncStream.h"
#include "RE/B/BSResource_ID.h"
#include "RE/B/BSResource_Stream.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTEvent.h"
#include "RE/B/BSTSmallIndexScatterTable.h"
#include "RE/B/BSTSmartPointer.h"

namespace RE::BSResource
{
	class Location;

	namespace Archive2
	{
		class RegisteredEvent;
		class ClearRegistryEvent;

		template <typename TId = std::uint8_t, std::size_t NumEntries = 256>
		class __declspec(novtable) TIndex :
			public RE::BSTEventSink<RegisteredEvent>,    // 0000
			public RE::BSTEventSink<ClearRegistryEvent>  // 0008
		{
		public:
			static constexpr auto RTTI{ RE::RTTI::BSResource__Archive2__Index };
			static constexpr auto VTABLE{ RE::VTABLE::BSResource__Archive2__Index };

			class Pager;
			class NameIDAccess;

			class Chunk
			{
			public:
				// members
				std::uint64_t dataFileOffset = 0;    // 00
				std::uint32_t compressedSize = 0;    // 08
				std::uint32_t uncompressedSize = 0;  // 0C
			};
			static_assert(sizeof(Chunk) == 0x10);

			class Loose
			{
			public:
				// members
				RE::BSResource::Location* location = nullptr;  // 00
				RE::BSFixedString         nameText;            // 08
			};
			static_assert(sizeof(Loose) == 0x10);

			class EntryHeader
			{
			public:
				[[nodiscard]] bool IsChunk() const noexcept { return this->chunkOffsetOrType != 0; }
				[[nodiscard]] bool IsLoose() const noexcept { return this->chunkOffsetOrType == 0; }

				// members
				RE::BSResource::ID nameID;                 // 00
				TId                dataFileIndex = 0;      // 0C
				std::uint8_t       chunkCount = 0;         // 0E
				std::uint16_t      chunkOffsetOrType = 0;  // 0F
			};

			class Entry :
				public EntryHeader  // 00
			{
			public:
				~Entry()
				{
					if (this->IsLoose()) {
						this->loose.~Loose();
					} else {
						this->chunk.~Chunk();
					}
				}

				// members
				union
				{
					Chunk     chunk;
					Loose     loose;
					std::byte buffer[std::max(sizeof(Chunk), sizeof(Loose))] = {};
				};                             // 10
				RE::BSFixedString stringName;  // 20
			};

			class CursorWithEntry :
				public RE::BSBTreeFile::BPTree<Pager, RE::BSBTreeFile::PGFSEDL<Entry, RE::BSResource::ID, 4096>, 16>::Cursor  // 000
			{
			public:
				// members
				Entry e;  // 148
			};

			// members
			RE::BSTSmallIndexScatterTable<RE::BSResource::ID, NameIDAccess>                               nameTable;                    // 0010
			RE::BSTSmartPointer<RE::BSResource::Stream>                                                   dataFiles[NumEntries];        // 0030
			RE::BSTSmartPointer<RE::BSResource::AsyncStream>                                              asyncDataFiles[NumEntries];   // 0830
			RE::BSResource::ID                                                                            dataFileNameIDs[NumEntries];  // 1030
			std::uint32_t                                                                                 dataFileCount;                // 1C30
			RE::BSBTreeFile::BPTree<Pager, RE::BSBTreeFile::PGFSEDL<Entry, RE::BSResource::ID, 4096>, 16> tr;                           // 1C38
			RE::BSReadWriteLock                                                                           lock;                         // 1C58
		};

		using Index256 = TIndex<>;
		static_assert(sizeof(Index256) == 0x1C60);

		using Index1024 = TIndex<uint16_t, 1024>;
		static_assert(sizeof(Index1024) == 0x7060);

		using Index = Index1024;
	}
}
