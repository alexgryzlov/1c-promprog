cmake_minimum_required(VERSION 3.17)
project(opencv)
find_package(OpenCV REQUIRED)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

execute_process(COMMAND python3 generate_data.py WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/data)

add_executable(not_preprocessed main.cpp)
add_executable(preprocessed main_preprocessed.cpp)

include_directories( ${OpenCV_INCLUDE_DIRS} )
include_directories(${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(not_preprocessed ${OpenCV_LIBS} )
target_link_libraries(preprocessed ${OpenCV_LIBS} )
