#pragma once
#include "PortableDevice.h"
#include "HomeAppliance.h"

class SmartHomeDevice : public PortableDevice, public HomeAppliance {
    std::string connection_type_;
public:
    SmartHomeDevice(const std::string& brand, const std::string& room, const std::string& connection_type);
    std::string GetDescription() const override;
};
