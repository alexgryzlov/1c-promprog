project(task1)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

execute_process(COMMAND python3 preparing.py WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/A)
add_subdirectory(B)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(${PROJECT_NAME} C/main.cpp)
add_executable(test C/main-test.cpp C/test.cpp)
target_link_libraries(${PROJECT_NAME} Blib)
target_link_libraries(test Blib gtest)
