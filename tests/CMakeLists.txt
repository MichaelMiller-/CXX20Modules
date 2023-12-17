add_executable(test.modules main.cpp)

CPMAddPackage("gh:catchorg/Catch2@3.5.0")

target_link_libraries(test.modules PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)
target_link_libraries(test.modules PRIVATE module_lib)

add_test(NAME test.modules COMMAND ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/test.modules)
