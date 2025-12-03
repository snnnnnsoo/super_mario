cmake_minimum_required(VERSION 3.2...3.27.5)

project(super_mario)

# Найти ncurses
find_package(PkgConfig REQUIRED)
pkg_search_module(NCURSES REQUIRED ncurses)

SET(CMAKE_CXX_FLAGS "-finput-charset=utf-8 -fexec-charset=utf-8")

set(SOURCES main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

# Прилинковать ncurses к основному проекту
target_link_libraries(${PROJECT_NAME} ${NCURSES_LIBRARIES})
target_include_directories(${PROJECT_NAME} PRIVATE ${NCURSES_INCLUDE_DIRS})

add_subdirectory(os_controls)
add_subdirectory(controller)
add_subdirectory(levels)
add_subdirectory(model)
add_subdirectory(objects)
add_subdirectory(ui)