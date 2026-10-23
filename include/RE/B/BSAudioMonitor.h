#pragma once

namespace RE::BSAudioMonitor
{
	class Request
	{
	public:
		Request(std::uint16_t a_monitorID, float a_sendLevel) :
			m_monitorID(a_monitorID),
			m_sendLevel(a_sendLevel)
		{}

		[[nodiscard]] inline std::uint16_t GetID() const noexcept { return m_monitorID; }
		[[nodiscard]] inline float         GetSendLevel() const noexcept { return m_sendLevel; }

		// members
		float         m_sendLevel;
		std::uint16_t m_monitorID;
	};
	static_assert(sizeof(Request) == 0x8);

	class Receiver
	{
	public:
		Receiver(const float* a_amplitude) :
			m_amplitude(a_amplitude)
		{}

		Receiver(const float& a_amplitude) :
			m_amplitude(std::addressof(a_amplitude))
		{}

		[[nodiscard]] inline float GetAmplitude() const noexcept { return *m_amplitude; }

		// members
		const float* m_amplitude;
	};
	static_assert(sizeof(Receiver) == 0x8);
}
