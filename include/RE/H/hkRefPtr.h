#pragma once

#include <memory>
#include <utility>

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	template <class T>
	class hkRefPtr
	{
	public:
		hkRefPtr() = default;

		hkRefPtr(std::nullptr_t) noexcept {};

		hkRefPtr(T* a_ptr) :
			m_ptr(a_ptr)
		{
			TryAddReference();
		}

		hkRefPtr(const hkRefPtr& a_other) :
			m_ptr(a_other.m_ptr)
		{
			TryAddReference();
		}

		hkRefPtr(hkRefPtr&& a_other) noexcept :
			m_ptr(std::exchange(a_other.m_ptr, nullptr))
		{}

		~hkRefPtr() noexcept
		{
			TryRemoveReference();
		}

		hkRefPtr& operator=(const hkRefPtr& a_other)
		{
			return *this = a_other.m_ptr;
		}

		hkRefPtr& operator=(hkRefPtr&& a_other) noexcept
		{
			if (this != std::addressof(a_other)) {
				hkRefPtr replacement{ std::move(a_other) };
				std::swap(m_ptr, replacement.m_ptr);
			}
			return *this;
		}

		hkRefPtr& operator=(T* a_ptr)
		{
			if (m_ptr != a_ptr) {
				hkRefPtr replacement{ a_ptr };
				std::swap(m_ptr, replacement.m_ptr);
			}

			return *this;
		}

	public:
		T* get() const noexcept { return m_ptr; }

	public:
		T& operator*() const noexcept
		{
			assert(static_cast<bool>(*this));
			return *m_ptr;
		}

		T* operator->() const noexcept
		{
			assert(static_cast<bool>(*this));
			return m_ptr;
		}

		explicit operator bool() const noexcept
		{
			return m_ptr != nullptr;
		}

	private:
		void TryAddReference()
		{
			if (m_ptr) {
				const_cast<hkReferencedObject*>(reinterpret_cast<const hkReferencedObject*>(m_ptr))->AddReference();
			}
		}

		void TryRemoveReference()
		{
			if (m_ptr) {
				const_cast<hkReferencedObject*>(reinterpret_cast<const hkReferencedObject*>(m_ptr))->RemoveReference();
				m_ptr = nullptr;
			}
		}

	private:
		T* m_ptr{ nullptr };
	};
}
