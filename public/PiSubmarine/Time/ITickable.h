#pragma once

#include <chrono>

namespace PiSubmarine::Time
{
    class ITickable
    {
public:
        virtual ~ITickable() = default;

        virtual void Tick(std::chrono::nanoseconds deltaTime) = 0;
    };
}

