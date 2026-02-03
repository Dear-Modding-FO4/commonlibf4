#include <REL\Module.h>
#include <REL\Utility.h>
#include <F4SE\Version.h>

namespace REL
{
    constexpr static auto OG_LATEST_VERSION = F4SE::RUNTIME_1_10_163;
    constexpr static auto NG_LATEST_VERSION = F4SE::RUNTIME_1_10_984;

    static REL::Version safe_verm{ 0, 0, 0, 0 };

	[[nodiscard]] std::size_t GetRuntimeIndex() noexcept
    {
		if (safe_verm.major() == 0)
		{
			safe_verm = REL::Module::GetSingleton()->version();
		}

		if (safe_verm == OG_LATEST_VERSION)
		{
            return 0;
        }
        
        if ((safe_verm > OG_LATEST_VERSION) && (safe_verm <= NG_LATEST_VERSION))
		{
            return 1;
        }

		if (safe_verm > NG_LATEST_VERSION)
		{
			return 2;
		}

		// Default to AE
        return 2; 
    }
}
