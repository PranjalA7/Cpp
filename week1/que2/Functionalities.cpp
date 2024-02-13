// Functionalities.cpp
#include "Functionalities.h"
#include <algorithm>

std::vector<std::shared_ptr<Device>> create_device_instances() {
    // Create 5 instances of Device using shared_ptr and return them in a vector
    std::vector<std::shared_ptr<Device>> devices;

    // Example instances with varying properties
    auto driver1 = std::make_shared<DeviceDriver>("v1", "Q1", 100.0);
    auto device1 = std::make_shared<Device>("ID1", INFOTAINMENT, 75, driver1);
    devices.push_back(device1);

    auto driver2 = std::make_shared<DeviceDriver>("v2", "Q2", 150.0);
    auto device2 = std::make_shared<Device>("ID2", ACCESSORY, 60, driver2);
    devices.push_back(device2);

    auto driver3 = std::make_shared<DeviceDriver>("v3", "Q3", 120.0);
    auto device3 = std::make_shared<Device>("ID3", SAFETY, 30, driver3);
    devices.push_back(device3);

    auto driver4 = std::make_shared<DeviceDriver>("v4", "Q4", 200.0);
    auto device4 = std::make_shared<Device>("ID4", INFOTAINMENT, 90, driver4);
    devices.push_back(device4);

    auto driver5 = std::make_shared<DeviceDriver>("v5", "Q1", 80.0);
    auto device5 = std::make_shared<Device>("ID5", SAFETY, 70, driver5);
    devices.push_back(device5);

    return devices;
}

std::vector<std::string> find_device_ids_above_threshold(const std::vector<std::shared_ptr<Device>>& devices, float threshold) {
    // Find and return device ids of instances with battery drain factor above the threshold
    std::vector<std::string> result;

    for (const auto& device : devices) {
        if (device->find_battery_drain_factor() > threshold) {
            result.push_back(device->get_device_id());
        }
    }

    return result;
}

bool are_all_infotainment(const std::vector<std::shared_ptr<Device>>& devices) {
    // Check if all instances are of_device_type INFOTAINMENT
    return std::all_of(devices.begin(), devices.end(), [](const auto& device) {
        return device->get_device_type() == INFOTAINMENT;
    });
}

float average_size_in_bytes_by_quarter(const std::vector<std::shared_ptr<Device>>& devices, const std::string& quarter) {
    // Calculate and return the average size in bytes for instances with the specified quarter
    std::vector<float> sizes;

    for (const auto& device : devices) {
        if (device->get_device_driver()->_release_quarter == quarter) {
            sizes.push_back(device->get_device_driver()->_size_in_bytes);
        }
    }

    if (sizes.empty()) {
        return 0.0;
    }

    return std::accumulate(sizes.begin(), sizes.end(), 0.0) / sizes.size();
}

std::string find_version_number_by_device_id(const std::vector<std::shared_ptr<Device>>& devices, const std::string& device_id) {
    // Find and return the version number of the Device Driver for the specified device_id
    for (const auto& device : devices) {
        if (device->get_device_id() == device_id) {
            return device->get_device_driver()->_version_number;
        }
    }

    return "";  // Return an empty string if not found
}

std::vector<std::shared_ptr<DeviceDriver>> find_device_drivers_by_type(const std::vector<std::shared_ptr<Device>>& devices, DeviceType type) {
    // Find and return Device Driver instances whose type matches the specified type
    std::vector<std::shared_ptr<DeviceDriver>> result;

    for (const auto& device : devices) {
        if (device->get_device_type() == type) {
            result.push_back(device->get_device_driver());
        }
    }

    return result;
}
