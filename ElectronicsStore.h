#pragma once

#include "ElectronicDevice.h"

#include <iostream>
#include <vector>
#include <memory>

class ElectronicsStore {
private:
    std::vector<std::shared_ptr<ElectronicDevice>> inventory_;

public:
    void AddDevice(const std::shared_ptr<ElectronicDevice>& device);

    void ListDevices() const;

    void ViewDeviceDetails(int index) const;
};