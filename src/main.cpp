#include "system_info.hpp"
#include <iostream>
#include <iomanip>

int main()
{
    SystemInfo info;

    std::cout << "╭─ sysmon ────────────────────────────────────╮\n";
    std::cout << "│ Linux System Information                    │\n";
    std::cout << "╰─────────────────────────────────────────────╯\n\n";

    std::cout << "  SYSTEM\n";
    std::cout << "  ├─ Hostname       " << info.get_hostname() << '\n';
    std::cout << "  ├─ OS             "
              << info.get_os_name() << " "
              << info.get_os_version() << '\n';
    std::cout << "  ├─ Kernel         " << info.get_kernel_version() << '\n';
    std::cout << "  ├─ Architecture   " << info.get_architecture() << '\n';
    std::cout << "  └─ Uptime         " << info.get_uptime() << "\n\n";

    std::cout << "  HARDWARE\n";
    std::cout << "  ├─ Vendor         " << info.get_vendor() << '\n';
    std::cout << "  ├─ Product        " << info.get_product_name() << '\n';
    std::cout << "  └─ Version        " << info.get_product_version() << "\n\n";

    std::cout << "  CPU\n";
    std::cout << "  ├─ Model          " << info.get_cpu_model() << '\n';
    std::cout << "  ├─ Cores          " << info.get_cpu_cores() << '\n';
    std::cout << "  └─ Threads        " << info.get_cpu_threads() << "\n\n";

    std::cout << "  RAM\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "  ├─ Total          " << info.get_ram_total() << " GB\n";
    std::cout << "  ├─ Available      " << info.get_ram_available() << " GB\n";
    std::cout << "  └─ Used           " << info.get_ram_used() << " GB\n";

    return 0;
}
