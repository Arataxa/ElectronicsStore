#pragma once
#include "ElectronicDevice.h"

class PortableDevice : virtual public ElectronicDevice {
    std::string brand_;
public:
    PortableDevice(const std::string& brand);
    virtual ~PortableDevice() {}
    virtual std::string GetBrand() const;
    std::string GetDescription() const override = 0;
};
