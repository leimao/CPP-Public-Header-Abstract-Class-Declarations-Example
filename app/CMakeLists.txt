cmake_minimum_required(VERSION 3.10.0)

project(BOT_APP VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

add_executable(app app.cpp)
target_include_directories(app PUBLIC ${BOT_INCLUDE_DIR})
target_link_libraries(app bot)

add_executable(app_failure app_failure.cpp)
target_include_directories(app_failure PUBLIC ${BOT_INCLUDE_DIR})
target_link_libraries(app_failure bot)

add_executable(app_virtual app_virtual.cpp)
target_include_directories(app_virtual PUBLIC ${BOT_INCLUDE_DIR})
target_link_libraries(app_virtual virtual_bot)