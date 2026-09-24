#ifndef SYSTEM_INFO_HPP
#define SYSTEM_INFO_HPP

#include <string>

class SystemInfo {
public:
    SystemInfo();

    std::string get_vendor() const;
    std::string get_product_name() const;
    std::string get_product_version() const;
    std::string get_serial_number() const;
    std::string get_uuid() const;

private:
    std::string vendor_;
    std::string product_name_;
    std::string product_version_;
    std::string serial_number_;
    std::string uuid_;

    std::string read_file_content(const std::string& path) const;
};

#endif