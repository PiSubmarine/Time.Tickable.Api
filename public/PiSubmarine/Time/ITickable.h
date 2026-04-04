#pragma once

#include <chrono>

namespace PiSubmarine::Time
{
    class ITickable
    {
public:
        virtual ~ITickable() = default;

        virtual void Tick(const std::chrono::nanoseconds& uptime, const std::chrono::nanoseconds& deltaTime) = 0;
    };
}

