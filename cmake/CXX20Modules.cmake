if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 19.25)
        message(FATAL_ERROR "MSVC 19.25 is minimum required")
    endif()
else()
    message(FATAL_ERROR "Unsupported Compiler")
endif()

function(add_module project_name module_name)
    add_custom_target(
        ${module_name}
        COMMAND
            ${CMAKE_CXX_COMPILER}
            ${CMAKE_CXX_FLAGS}
            ${CMAKE_C_FLAGS}
            "/std:c++latest"
            "/experimental:module"
            "/c"
            ${CMAKE_CURRENT_SOURCE_DIR}/${module_name}.ixx)

    add_dependencies(${PROJECT_NAME} ${module_name})
    target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_BINARY_DIR}/${module_name}.obj)
endfunction()
