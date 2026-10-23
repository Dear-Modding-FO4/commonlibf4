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
				Location*			location = nullptr;  // 00
				BSFixedString		nameText;            // 08
			};
			static_assert(sizeof(Loose) == 0x10);

			class EntryHeader
			{
			public:
				[[nodiscard]] bool IsChunk() const noexcept { return this->chunkOffsetOrType != 0; }
				[[nodiscard]] bool IsLoose() const noexcept { return this->chunkOffsetOrType == 0; }

				// members
				ID					nameID;                 // 00
				TId					dataFileIndex = 0;      // 0C
				std::uint8_t		chunkCount = 0;         // 0E
				std::uint16_t		chunkOffsetOrType = 0;  // 0F
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
				};								// 10
				BSFixedString stringName;		// 20
			};

			class CursorWithEntry :
				public RE::BSBTreeFile::BPTree<Pager, RE::BSBTreeFile::PGFSEDL<Entry, RE::BSResource::ID, 4096>, 16>::Cursor  // 000
			{
			public:
				// members
				Entry e;  // 148
			};

			// members
			RE::BSTSmallIndexScatterTable<ID, NameIDAccess>									nameTable;                    // 0010
			RE::BSTSmartPointer<Stream>														dataFiles[NumEntries];        // 0030
			RE::BSTSmartPointer<AsyncStream>												asyncDataFiles[NumEntries];   // ....
			ID																				dataFileNameIDs[NumEntries];  // ....
			std::uint32_t																	dataFileCount;                // ....
			BSBTreeFile::BPTree<Pager, BSBTreeFile::PGFSEDL<Entry, ID, 4096>, 16>			tr;                           // ....
			BSReadWriteLock																	lock;                         // ....
		};

		using Index256 = TIndex<>;
		static_assert(sizeof(Index256) == 0x1C60);

		using Index1024 = TIndex<std::uint16_t, 1024>;
		static_assert(sizeof(Index1024) == 0x7060);

		using Index = Index1024;
	}
}
