cmake_minimum_required(VERSION 3.10.0)

project(BOT VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

add_library(bot SHARED bot.cpp)
target_include_directories(bot PUBLIC ${BOT_INCLUDE_DIR})

add_library(virtual_bot SHARED virtual_bot.cpp)
target_include_directories(virtual_bot PUBLIC ${BOT_INCLUDE_DIR})