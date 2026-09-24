# Development Log — sysmon

## [Day 01] - Setup, Stage 1 & Debugging Analysis

### Tasks Completed:
1. Configured CMake and the folder structure (`src/`, `include/`).
2. Implemented the `SystemInfo` module to read hardware and OS data:
    - DMI/BIOS: `/sys/class/dmi/id/sys_vendor`, `product_name`, `product_version`.
    - System: `/proc/sys/kernel/hostname`, `/proc/sys/kernel/osrelease`, `/proc/uptime`.
3. Wrote an `uptime` parser (converting seconds to the `Xh Ym` format).

---

### Debugging results in CLion (GDB):
- **Object field analysis**: When paused at a breakpoint inside `SystemInfo::SystemInfo()`, the fields (`vendor_`, `product_name_`, etc.) had the value `“”`.
- **Explanation**: In C++, fields of type `std::string` are initially initialized with empty strings. They are filled only after the `read_file_content()` function completes execution.
- **Confirmation**: A step-by-step execution (F8 / Step Over) showed that after exiting the constructor, all values are correctly read from the Linux file system.

---

*Stage 1: Fully completed.*
