// Device.h
#ifndef DEVICE_H
#define DEVICE_H

#include <string>
#include <memory>

enum DeviceType {
    INFOTAINMENT,
    ACCESSORY,
    SAFETY
};

class DeviceDriver {
public:
    std::string _version_number;
    std::string _release_quarter;
    float _size_in_bytes;

    DeviceDriver(const std::string& version_number, const std::string& release_quarter, float size_in_bytes);
};

class Device {
private:
    
    std::string _device_id;
    DeviceType _device_type;
    int _device_battery_level;
    std::shared_ptr<DeviceDriver> _device_driver;

public:
    Device(const std::string& device_id, DeviceType device_type, int battery_level, std::shared_ptr<DeviceDriver> device_driver);

    float find_battery_drain_factor() const;

    const std::string& get_device_id() const;

    DeviceType get_device_type() const;

    const std::shared_ptr<DeviceDriver>& get_device_driver() const;
};

#endif // DEVICE_H
