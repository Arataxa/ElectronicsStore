#pragma once
#include "PortableDevice.h"

class Smartphone : public PortableDevice {
    int battery_capacity_;
public:
    Smartphone(const std::string& brand, int batteryCapacity);
    std::string GetDescription() const override;
    int GetBatteryCapacity() const;
};
