sysmon
======

sysmon is a lightweight Linux system information utility written in
modern C++.

The project is built from scratch as a C++ learning and systems
programming project, with a focus on working with Linux system
interfaces.

Quick Start
-----------

* Build requirements: Linux, C++20 compatible compiler, CMake 3.20+
* Build the utility: cmake -S . -B build && cmake --build build
* Run the executable: ./build/sysmon
* DMI Interface: /sys/class/dmi/id/

Essential Documentation
-----------------------

All users should be familiar with:

* Build System: CMakeLists.txt
* Core Header: include/system_info.hpp
* License: See LICENSE


Who Are You?
============

Find your role below:

* C++ / Systems Developer: Learning C++20 and Linux system interfaces
* System Administrator: Reading hardware DMI information
* Contributor: Extending sysmon functionality


For Specific Users
==================

C++ / Systems Developer
-----------------------

Explore Linux system programming and the C++ implementation:

* System Information Class: include/system_info.hpp
* Core Implementation: src/system_info.cpp
* Main Entry Point: src/main.cpp

System Administrator
--------------------

DMI interface paths read by sysmon (unavailable values reported as "Unknown"):

* System Vendor: /sys/class/dmi/id/sys_vendor
* Product Name: /sys/class/dmi/id/product_name
* Product Version: /sys/class/dmi/id/product_version
* Serial Number: /sys/class/dmi/id/product_serial
* System UUID: /sys/class/dmi/id/product_uuid

Contributor
-----------

Project setup and layout:

* Build Configuration: CMakeLists.txt
* Version Control Rules: .gitignore
* Project License: LICENSE


Project Structure
=================

sysmon/
    include/
        system_info.hpp
    src/
        main.cpp
        system_info.cpp
    .gitignore
    CMakeLists.txt
    LICENSE
    README.md


Status and Support
==================

* Status: sysmon is a work in progress
* License: MIT License (see LICENSE for details)
