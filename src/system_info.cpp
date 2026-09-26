#include "system_info.hpp"
#include <fstream>
#include <sys/utsname.h>

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

    os_name_ = read_os_release("NAME");
    os_version_ = read_os_release("VERSION_ID");


    struct utsname system_info;

    if (uname(&system_info) == 0) {
        kernel_version_ = system_info.release;
        architecture_ = system_info.machine;
    } else {
        kernel_version_ = "Unknown";
        architecture_ = "Unknown";
    }

    hostname_ = read_file_content("/etc/hostname");
}

std::string SystemInfo::read_os_release(const std::string& key) const {
    std::ifstream file("/etc/os-release");

    if (!file) {
        return "Unknown";
    }

    std::string line;

    while (std::getline(file, line)) {
        if (line.rfind(key + "=", 0) == 0) {
            std::string value = line.substr(key.length() + 1);

            if (value.size() >= 2 &&
                value.front() == '"' &&
                value.back() == '"') {
                value = value.substr(1, value.size() - 2);
            }

            return value;
        }
    }

    return "Unknown";
}
std::string SystemInfo::get_uptime() const {
    std::ifstream file("/proc/uptime");

    if (!file) {
        return "Unknown";
    }

    double uptime_seconds;
    file >> uptime_seconds;

    long total_seconds = static_cast<long>(uptime_seconds);

    long days = total_seconds / 86400;
    total_seconds %= 86400;

    long hours = total_seconds / 3600;
    total_seconds %= 3600;

    long minutes = total_seconds / 60;


    std::string result;

    if (days > 0) {
        result += std::to_string(days) + (days == 1 ? " day" : " days");
    }

    if (hours > 0) {
        if (!result.empty()) {
            result += ", ";
        }

        result += std::to_string(hours) + (hours == 1 ? " hour" : " hours");
    }

    if (minutes > 0) {
        if (!result.empty()) {
            result += ", ";
        }

        result += std::to_string(minutes) + (minutes == 1 ? " minute" : " minutes");
    }

    return result.empty() ? "Less than a minute" : result;
}

std::string SystemInfo::get_vendor() const { return vendor_; }
std::string SystemInfo::get_product_name() const { return product_name_; }
std::string SystemInfo::get_product_version() const { return product_version_; }
std::string SystemInfo::get_serial_number() const { return serial_number_; }
std::string SystemInfo::get_uuid() const { return uuid_; }

std::string SystemInfo::get_os_name() const {
    return os_name_;
}

std::string SystemInfo::get_kernel_version() const {
    return kernel_version_;
}

std::string SystemInfo::get_architecture() const {
    return architecture_;
}

std::string SystemInfo::get_hostname() const {
    return hostname_;
}

std::string SystemInfo::get_os_version() const {
    return os_version_;
}