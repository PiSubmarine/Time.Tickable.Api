#pragma once

#include <gmock/gmock.h>
#include "PiSubmarine/Time/ITickable.h"

namespace PiSubmarine::Time
{
    class ITickableMock : public ITickable
    {
    public:
        MOCK_METHOD(void, Tick, (std::chrono::nanoseconds), (override));
    };
}
