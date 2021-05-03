cmake_minimum_required(VERSION 3.0)

if(NOT DEFINED TOOLCHAIN_PATH)
    message( FATAL_ERROR "Set path to toolchain." )

set(CMAKE_CXX_COMPILER ${TOOLCHAIN_PATH}/bin/arm-linux-gnueabihf-g++)
project(SimpleLibrary)

include_directories(include)

set(CMAKE_INSTALL_RPATH ${SimpleLibrary_SOURCE_DIR}/lib)
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${SimpleLibrary_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${SimpleLibrary_SOURCE_DIR}/lib)
add_subdirectory(src)
add_executable(Main main.cpp)
add_executable(MainLib main_lib.cpp)

target_link_libraries(MainLib buffer)

install(TARGETS buffer DESTINATION lib)
install(FILES include/buffer.h DESTINATION include)
install(TARGETS Main MainLib DESTINATION bin)

