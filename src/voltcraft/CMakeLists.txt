cmake_minimum_required(VERSION 3.20)

file(GLOB_RECURSE TARGET_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

add_library(voltcraft ${TARGET_SOURCES})

set_property(TARGET voltcraft PROPERTY CXX_STANDARD 20)

target_link_libraries(voltcraft voltpy)
