#include "ElectronicsStore.h"

void ElectronicsStore::AddDevice(const std::shared_ptr<ElectronicDevice>& device) {
    inventory_.push_back(device);
}

void ElectronicsStore::ListDevices() const {
    std::cout << "Available devices:" << std::endl;
    int index = 0;
    for (const auto& device : inventory_) {
        std::cout << index++ << ": " << device->GetDescription() << std::endl;
    }
}

void ElectronicsStore::ViewDeviceDetails(int index) const {
    if (index < 0 || index >= inventory_.size()) {
        std::cout << "Invalid device index." << std::endl;
        return;
    }
    std::cout << "Device details: " << inventory_[index]->GetDescription() << std::endl;
}