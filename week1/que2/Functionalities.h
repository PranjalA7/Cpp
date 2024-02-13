// Functionalities.h
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Device.h"
#include <vector>
#include <numeric>

std::vector<std::shared_ptr<Device>> create_device_instances();

std::vector<std::string> find_device_ids_above_threshold(const std::vector<std::shared_ptr<Device>>& devices, float threshold);

bool are_all_infotainment(const std::vector<std::shared_ptr<Device>>& devices);

float average_size_in_bytes_by_quarter(const std::vector<std::shared_ptr<Device>>& devices, const std::string& quarter);

std::string find_version_number_by_device_id(const std::vector<std::shared_ptr<Device>>& devices, const std::string& device_id);

std::vector<std::shared_ptr<DeviceDriver>> find_device_drivers_by_type(const std::vector<std::shared_ptr<Device>>& devices, DeviceType type);

#endif // FUNCTIONALITIES_H
