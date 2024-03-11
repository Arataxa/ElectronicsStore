#pragma once
#include "HomeAppliance.h"

class Refrigerator : public HomeAppliance {
    double volume_in_liters_;
public:
    Refrigerator(const std::string& room, double volume);
    std::string GetDescription() const override;
    double GetVolumeInLiters() const;
};
