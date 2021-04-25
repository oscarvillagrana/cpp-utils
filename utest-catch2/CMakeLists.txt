cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(hello VERSION 1.0)

find_package(Catch2 REQUIRED)

add_executable(hello main.cpp)
#target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#add_executable(tests test.cpp)
target_link_libraries(hello PRIVATE Catch2::Catch2)
