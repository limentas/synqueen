if(WIN32)
    # Enforce 64-bit architecture
    if(CMAKE_SIZEOF_VOID_P EQUAL 4)
        message(
            STATUS
            "Building on ${CMAKE_HOST_SYSTEM_NAME} ${CMAKE_HOST_SYSTEM_PROCESSOR}")
        message(
            STATUS
            "Building for ${CMAKE_SYSTEM_NAME} ${CMAKE_SYSTEM_PROCESSOR}")
        message(FATAL_ERROR "32-bit builds are not supported!")
    endif()

    set(VCPKG_TARGET_TRIPLET "x64-windows-static-md")
endif()
