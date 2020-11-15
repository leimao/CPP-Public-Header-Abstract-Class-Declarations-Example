cmake_minimum_required(VERSION 3.10.0)

project(BOT_PROJECT VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

find_path(BOT_INCLUDE_DIR bot.h HINTS ${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)
add_subdirectory(app)