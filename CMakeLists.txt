cmake_minimum_required(VERSION 3.10)

project(uapp)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(vendor/updateable)

add_executable(uapp src/main.cpp)
target_include_directories(uapp PRIVATE vendor/updateable/loader/src)
target_link_libraries(uapp PRIVATE updatableloader)

add_library(app SHARED 
    src/app.cpp
    src/applayer.h src/applayer.cpp    
)
target_include_directories(app PUBLIC vendor/updateable/updateable/src)
target_link_libraries(app PRIVATE updateable)