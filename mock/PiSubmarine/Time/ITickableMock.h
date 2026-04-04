#pragma once

#include <gmock/gmock.h>
#include "PiSubmarine/Time/ITickable.h"

namespace PiSubmarine::Time
{
    class ITickableMock : public ITickable
    {
    public:
        MOCK_METHOD(void, Tick, (const std::chrono::nanoseconds& uptime, const std::chrono::nanoseconds& deltaTime), (override));
    };
}
