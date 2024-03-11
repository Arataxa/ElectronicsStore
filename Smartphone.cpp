#include "Smartphone.h"

Smartphone::Smartphone(const std::string& brand, int battery_capacity) 
	: PortableDevice(brand), battery_capacity_(battery_capacity) {}

int Smartphone::GetBatteryCapacity() const {
	return battery_capacity_;
}

std::string Smartphone::GetDescription() const {
	return "It's Smartphone";
}