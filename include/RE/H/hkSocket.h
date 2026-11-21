#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkSocket :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkSocket };
		inline static constexpr auto VTABLE{ VTABLE::hkSocket };

		// add
		virtual bool isOk();  // 0x20 [04]
		virtual void close();  // 0x28 [05] (void)
		virtual void read();  // 0x30 [06] (void__int)
		virtual void write();  // 0x38 [07] (void__int)
		virtual void connect();  // 0x40 [08] (char__int)
		virtual void listen();  // 0x48 [09] (int)
		virtual void asyncSelect();  // 0x50 [0A] (void__uint_hkSocket::SOCKET_EVENTS)
		virtual bool canRead();  // 0x58 [0B]
		virtual void pollForNewClient();  // 0x60 [0C] (void)
		virtual void getAddress();  // 0x68 [0D] (hkStringBuf&_int&)

		// members
		void* unk10;               // 0x10
		std::uint32_t unk18;  // 0x18
		std::uint8_t pad1C[0x4];  // 0x1C
		void* unk20;  // 0x20
		void* unk28;               // 0x28
		std::uint32_t unk30;  // 0x30
		std::uint8_t pad34[0x4];  // 0x34
		void* unk38;  // 0x38
	};
	static_assert(sizeof(hkSocket) == 0x40);
	static_assert(offsetof(hkSocket, unk10) == 0x10);
	static_assert(offsetof(hkSocket, unk28) == 0x28);
	static_assert(offsetof(hkSocket, unk18) == 0x18);
	static_assert(offsetof(hkSocket, pad1C) == 0x1C);
	static_assert(offsetof(hkSocket, unk20) == 0x20);
	static_assert(offsetof(hkSocket, unk30) == 0x30);
	static_assert(offsetof(hkSocket, pad34) == 0x34);
	static_assert(offsetof(hkSocket, unk38) == 0x38);
}
