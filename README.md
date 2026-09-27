# 🖥️ sysmon

> ⚡ Lightweight Linux system information utility written in modern C++20.

`sysmon` is a small command-line utility that collects system and hardware information directly from Linux system interfaces.

Built from scratch as a C++ learning and systems programming project, with a focus on understanding how Linux exposes system information.

## ✨ Features

### 🖥️ System

* Hostname
* Linux distribution
* OS version
* Kernel version
* CPU architecture
* System uptime

### 🔧 Hardware

* System vendor
* Product name
* Product version
* Serial number
* System UUID

### ⚙️ CPU

* CPU model
* Physical cores
* Logical CPUs / threads

### 🧠 Memory

* Total RAM
* Available RAM
* Used RAM

## 📺 Example

```text
╭─ sysmon ────────────────────────────────────╮
│ Linux System Information                    │
╰─────────────────────────────────────────────╯

  SYSTEM
  ├─ Hostname       rootnode
  ├─ OS             Nobara Linux 44
  ├─ Kernel         7.2.6-201.nobara.fc44.x86_64
  ├─ Architecture   x86_64
  └─ Uptime         1 day, 7 hours, 27 minutes

  HARDWARE
  ├─ Vendor         Micro-Star International Co., Ltd.
  ├─ Product        MS-7E02
  └─ Version        1.0

  CPU
  ├─ Model          12th Gen Intel(R) Core(TM) i5-12400F
  ├─ Cores          6
  └─ Threads        12

  RAM
  ├─ Total          31.12 GB
  ├─ Available      19.74 GB
  └─ Used           11.38 GB
```

## 🐧 Linux Interfaces

`sysmon` uses native Linux interfaces instead of external system-information libraries.

| Interface            | Purpose                     |
| -------------------- | --------------------------- |
| `/etc/os-release`    | Distribution and OS version |
| `/etc/hostname`      | Hostname                    |
| `/proc/uptime`       | System uptime               |
| `/proc/cpuinfo`      | CPU information             |
| `/proc/meminfo`      | Memory information          |
| `/sys/class/dmi/id/` | Hardware information        |
| `uname()`            | Kernel and architecture     |

## 🛠️ Build

### Requirements

* Linux
* C++20 compatible compiler
* CMake 3.20+

### Build

```bash
cmake -S . -B build
cmake --build build
```

### Run

```bash
./build/sysmon
```

## 📁 Project Structure

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

## 🗺️ Roadmap

* [x] System information
* [x] Hardware information
* [x] CPU information
* [x] RAM information
* [x] Human-readable uptime
* [x] Minimal CLI interface
* [ ] CPU usage
* [ ] Storage information
* [ ] Network information
* [ ] GPU information
* [ ] Live monitoring mode

## 📄 License

MIT License — see [LICENSE](LICENSE).

---

*🚧 Work in progress.*
