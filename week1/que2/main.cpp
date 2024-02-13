// main.cpp
#include "Functionalities.h"
#include <iostream>

int main() {
    // Create instances
    std::vector<std::shared_ptr<Device>> devices = create_device_instances();

    // Test functions
    std::cout << "Device IDs with battery drain factor above 0.3: ";
    auto highDrainDevices = find_device_ids_above_threshold(devices, 0.3);
    for (const auto& id : highDrainDevices) {
        std::cout << id << " ";
    }
    std::cout << std::endl;

    std::cout << "Are all devices Infotainment? " << (are_all_infotainment(devices) ? "Yes" : "No") << std::endl;

    std::cout << "Average size in bytes for devices in Q1: " << average_size_in_bytes_by_quarter(devices, "Q1") << std::endl;

    std::string deviceIdToFind = "ID3";
    std::cout << "Version number for device with ID " << deviceIdToFind << ": " << find_version_number_by_device_id(devices, deviceIdToFind) << std::endl;

    DeviceType typeToFind = SAFETY;
    std::cout << "Device Drivers with type SAFETY: " << std::endl;
    auto safetyDrivers = find_device_drivers_by_type(devices, typeToFind);
    for (const auto& driver : safetyDrivers) {
        std::cout << "Version: " << driver->_version_number << ", Quarter: " << driver->_release_quarter << ", Size: " << driver->_size_in_bytes << std::endl;
    }

    return 0;
}
