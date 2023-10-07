cmake_minimum_required(VERSION 3.27.0)
project("My_Proect" VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(My_Project main.cpp)


target_link_libraries(My_Project PRIVATE nlohmann_json::nlohmann_json)

