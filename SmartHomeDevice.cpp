#include "SmartHomeDevice.h"

SmartHomeDevice::SmartHomeDevice(const std::string& brand, const std::string& room, const std::string& connection_type)
	: PortableDevice(brand), HomeAppliance(room), connection_type_(connection_type) {}

std::string SmartHomeDevice::GetDescription() const {
	return "It's Smart Home Device";
}