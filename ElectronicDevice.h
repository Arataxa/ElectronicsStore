#pragma once
#include <string>

class ElectronicDevice {
public:
    virtual ~ElectronicDevice() {}
    virtual std::string GetDescription() const = 0;
};
