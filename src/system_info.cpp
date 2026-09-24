#include "system_info.hpp"
#include <fstream>

std::string SystemInfo::read_file_content(const std::string& path) const {
    std::ifstream file(path);

    if (!file) {
        return "Unknown";
    }

    std::string content;
    std::getline(file, content);
    return content;
}

SystemInfo::SystemInfo() {
    vendor_ = read_file_content("/sys/class/dmi/id/sys_vendor");
    product_name_ = read_file_content("/sys/class/dmi/id/product_name");
    product_version_ = read_file_content("/sys/class/dmi/id/product_version");
    serial_number_ = read_file_content("/sys/class/dmi/id/product_serial");
    uuid_ = read_file_content("/sys/class/dmi/id/product_uuid");
}

std::string SystemInfo::get_vendor() const { return vendor_; }
std::string SystemInfo::get_product_name() const { return product_name_; }
std::string SystemInfo::get_product_version() const { return product_version_; }
std::string SystemInfo::get_serial_number() const { return serial_number_; }
std::string SystemInfo::get_uuid() const { return uuid_; }