#include "HomeAppliance.h"

HomeAppliance::HomeAppliance(const std::string& room) : room_(room) {}

std::string HomeAppliance::GetRoom() const {
    return room_;
}
