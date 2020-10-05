This repository is intended to setup [CMake](https://cmake.org) for C++20 modules and showcases how to use them with MSVC.

## Usage
Simply include the `CXX20Modules.cmake` file into your CMakeLists.txt and call `add_module()`.

```CMake
## example from this test-project
include(cmake/CXX20Modules.cmake)
add_module(${PROJECT_NAME} math)
```

To keep the `CXX20Modules.cmake` up to date, it is possible to use CMake functionality.
```CMake
file(
    DOWNLOAD
    https://raw.githubusercontent.com/MichaelMiller-/CXX20Modules/main/cmake/CXX20Modules.cmake
    "${PROJECT_SOURCE_DIR}/cmake/CXX20Modules.cmake")
```

## TODO
- support newer MSVC versions
- add support for other compilers
