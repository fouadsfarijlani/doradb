cmake_minimum_required(VERSION 3.30)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(doradb VERSION 1.0)

enable_testing()

add_subdirectory(cluster)
add_subdirectory(tests)

add_executable(doradb main.cpp)
target_link_libraries(doradb PUBLIC cluster)


