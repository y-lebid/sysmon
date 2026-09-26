#include "system_info.hpp"
#include <iostream>

int main() {
    SystemInfo info;

    std::cout << "=== System Information ===" << std::endl;
    std::cout << "Hostname:        " << info.get_hostname() << std::endl;
    std::cout << "OS:              " << info.get_os_name() << std::endl;
    std::cout << "OS Version:      " << info.get_os_version() << std::endl;
    std::cout << "Kernel:          " << info.get_kernel_version() << std::endl;
    std::cout << "Architecture:    " << info.get_architecture() << std::endl;
    std::cout << "Uptime:          " << info.get_uptime() << std::endl;


    std::cout << "\n=== Hardware ===" << std::endl;
    std::cout << "Vendor:          " << info.get_vendor() << std::endl;
    std::cout << "Product Name:    " << info.get_product_name() << std::endl;
    std::cout << "Product Version: " << info.get_product_version() << std::endl;
    std::cout << "Serial Number:   " << info.get_serial_number() << std::endl;
    std::cout << "UUID:            " << info.get_uuid() << std::endl;
    

    return 0;
}
