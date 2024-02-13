// Device.cpp
#include "Device.h"

DeviceDriver::DeviceDriver(const std::string& version_number, const std::string& release_quarter, float size_in_bytes)
    : _version_number(version_number), _release_quarter(release_quarter), _size_in_bytes(size_in_bytes) {}

Device::Device(const std::string& device_id, DeviceType device_type, int battery_level, std::shared_ptr<DeviceDriver> device_driver)
    : _device_id(device_id), _device_type(device_type), _device_driver(device_driver) {
        if (battery_level < 0 || battery_level > 100) {
        throw std::out_of_range("Battery level must be between 0 and 100.");
    }
    _device_battery_level = battery_level;
    }

float Device::find_battery_drain_factor() const {
    if (_device_type == INFOTAINMENT || _device_type == SAFETY) {
        return 0.25;
    } else if (_device_type == SAFETY && _device_battery_level > 50) {
        return 0.5;
    } else {
        return 0.4;
    }
}

const std::string& Device::get_device_id() const {
    return _device_id;
}

DeviceType Device::get_device_type() const {
    return _device_type;
}

const std::shared_ptr<DeviceDriver>& Device::get_device_driver() const {
    return _device_driver;
}
