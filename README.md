# sysmon

> Lightweight Linux system information utility written in modern C++.

Built from scratch as a C++ learning and systems programming project,
with a focus on Linux system interfaces.

## Build

```bash
cmake -S . -B build
cmake --build build
```

Run:

```bash
./build/sysmon
```

**Requirements:** Linux · C++20 · CMake 3.20+

## Features

* System vendor
* Product name
* Product version
* Serial number
* System UUID

Information is read from the Linux DMI interface:

```text
/sys/class/dmi/id/
```

## Structure

```text
sysmon/
├── include/
│   └── system_info.hpp
├── src/
│   ├── main.cpp
│   └── system_info.cpp
├── .gitignore
├── CMakeLists.txt
├── LICENSE
└── README.md
```

## License

MIT License — see [LICENSE](LICENSE).

---

*Work in progress.*
