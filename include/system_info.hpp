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
    std::string get_os_name() const;
    std::string get_kernel_version() const;
    std::string get_architecture() const;
    std::string get_hostname() const;
    std::string get_os_version() const;
    std::string get_uptime() const;

    std::string get_cpu_model() const;
    int get_cpu_cores() const;
    int get_cpu_threads() const;

private:
    std::string vendor_;
    std::string product_name_;
    std::string product_version_;
    std::string serial_number_;
    std::string uuid_;
    std::string os_name_;
    std::string kernel_version_;
    std::string architecture_;
    std::string hostname_;
    std::string os_version_;
    std::string uptime_;

    std::string cpu_model_;
    int cpu_cores_;
    int cpu_threads_;

    std::string read_file_content(const std::string& path) const;
    std::string read_os_release(const std::string& key) const;

    std::string read_cpu_info(const std::string& key) const;
    int count_cpu_threads() const;
};

#endif // SYSTEM_INFO_HPP