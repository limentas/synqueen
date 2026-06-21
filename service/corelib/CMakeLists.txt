cmake_minimum_required(VERSION 4.3)

project(synqueen-corelib)

add_library(
  synqueen-corelib
  SHARED
  include/corelib.hpp
  src/corelib.cpp
)

find_package(libuv 1.52.1 CONFIG REQUIRED)
target_link_libraries(synqueen-corelib PRIVATE $<IF:$<TARGET_EXISTS:libuv::uv_a>,libuv::uv_a,libuv::uv>)
find_package(RapidJSON CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
target_link_libraries(synqueen-corelib PRIVATE spdlog::spdlog_header_only)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_definitions(synqueen-corelib PRIVATE SYNQUEEN_EXPORTS)
