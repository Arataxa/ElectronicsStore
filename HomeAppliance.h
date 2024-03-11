#pragma once
#include "ElectronicDevice.h"

class HomeAppliance : virtual public ElectronicDevice {
private:
    std::string room_;
public:
    HomeAppliance(const std::string& room);
    virtual ~HomeAppliance() {}
    virtual std::string GetRoom() const;
    std::string GetDescription() const override = 0;
};
