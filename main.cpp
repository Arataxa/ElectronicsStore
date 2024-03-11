#include "ElectronicDevice.h"
#include "ElectronicsStore.h"
#include "Smartphone.h"
#include "Refrigerator.h"

int main() {
    ElectronicsStore store;

    store.AddDevice(std::make_shared<Smartphone>("Brand A", 3000));
    store.AddDevice(std::make_shared<Refrigerator>("Kitchen", 500.0));

    store.ListDevices();

    std::cout << "\nViewing details for device at index 1:" << std::endl;
    store.ViewDeviceDetails(1);

    return 0;
}