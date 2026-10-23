#pragma once

#include <cstddef>
#include <functional>
#include <memory>
#include <type_traits>
#include <typeinfo>
#include <utility>

namespace RE::msvc
{
	template <class>
	class legacy_function;

	template <class R, class... Args>
	class legacy_function<R(Args...)>
	{
	public:
		legacy_function() noexcept = default;

		explicit legacy_function(std::function<R(Args...)> a_function) :
			_function(a_function ? new implementation{ std::move(a_function) } : nullptr)
		{
			static_assert(offsetof(legacy_function, _function) == 0x18);
		}

		legacy_function(const legacy_function& a_other) :
			_function(a_other._function ? a_other._function->copy(nullptr) : nullptr)
		{}

		legacy_function(legacy_function&& a_other) noexcept :
			_function(std::exchange(a_other._function, nullptr))
		{}

		legacy_function& operator=(const legacy_function& a_other)
		{
			legacy_function copy{ a_other };
			swap(copy);
			return *this;
		}

		legacy_function& operator=(legacy_function&& a_other) noexcept
		{
			legacy_function moved{ std::move(a_other) };
			swap(moved);
			return *this;
		}

		~legacy_function()
		{
			if (_function)
				_function->delete_this(true);
		}

		[[nodiscard]] explicit operator bool() const noexcept { return _function != nullptr; }

		R operator()(Args... a_args) const
		{
			if (!_function)
				throw std::bad_function_call{};
			return _function->do_call(std::forward<Args>(a_args)...);
		}

		void swap(legacy_function& a_other) noexcept
		{
			std::swap(_function, a_other._function);
		}

	private:
		class proxy
		{
		public:
			virtual proxy*                copy(void*) const = 0;    // 00
			virtual proxy*                move(void*) = 0;          // 01
			virtual R                     do_call(Args&&...) = 0;   // 02
			virtual const std::type_info& target_type() const = 0;  // 03
			virtual void                  delete_this(bool) = 0;    // 04
			virtual ~proxy() = default;                             // 05
			virtual const void* get() const = 0;                    // 06
		};

		class implementation final : public proxy
		{
		public:
			explicit implementation(std::function<R(Args...)> a_function) :
				_callable(std::move(a_function))
			{}

			proxy* copy(void*) const override
			{
				return new implementation{ _callable };
			}

			proxy* move(void*) override
			{
				return new implementation{ std::move(_callable) };
			}

			R do_call(Args&&... a_args) override
			{
				return _callable(std::forward<Args>(a_args)...);
			}

			const std::type_info& target_type() const override
			{
				return typeid(std::function<R(Args...)>);
			}

			void delete_this(bool a_deallocate) override
			{
				if (a_deallocate)
					delete this;
				else
					this->~implementation();
			}

			const void* get() const override { return std::addressof(_callable); }

		private:
			std::function<R(Args...)> _callable;
		};

		// OG's MSVC callable pointer is at 0x18, not the modern std::function offset 0x38.
		alignas(void*) std::byte _storage[0x18]{};
		proxy* _function{};
	};
	static_assert(sizeof(legacy_function<void()>) == 0x20);
	static_assert(alignof(legacy_function<void()>) == alignof(void*));
	static_assert(std::is_standard_layout_v<legacy_function<void()>>);

	template <class Signature, class Invoke>
	decltype(auto) with_native_function(
		bool                            a_legacy,
		const std::function<Signature>& a_function,
		Invoke&&                        a_invoke)
	{
		static_assert(sizeof(std::function<Signature>) == 0x40);
		static_assert(sizeof(legacy_function<Signature>) == 0x20);
		if (a_legacy) {
			const legacy_function<Signature> native{ a_function };
			return std::invoke(std::forward<Invoke>(a_invoke), static_cast<const void*>(&native));
		}
		return std::invoke(std::forward<Invoke>(a_invoke), static_cast<const void*>(&a_function));
	}
}
