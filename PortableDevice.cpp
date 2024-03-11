#include "PortableDevice.h"

PortableDevice::PortableDevice(const std::string& brand) : brand_(brand) {}

std::string PortableDevice::GetBrand() const {
    return brand_;
}
