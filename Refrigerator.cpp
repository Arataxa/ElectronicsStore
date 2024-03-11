#include "Refrigerator.h"

Refrigerator::Refrigerator(const std::string& room, double volume) : HomeAppliance(room), volume_in_liters_(volume) {}

std::string Refrigerator::GetDescription() const {
	return "It's refrigerator";
}

double Refrigerator::GetVolumeInLiters() const {
	return volume_in_liters_;
}