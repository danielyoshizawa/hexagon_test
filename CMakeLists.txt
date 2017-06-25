cmake_minimum_required(VERSION 3.3)

project(hexagon)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        )

set(VIEW_FILES
        views/MainWindow.cpp
        )

set(CONTROLLER_FILES
        controllers/MainWindowController.cpp
        )

set(MODEL_FILES
        )

set(INTERFACE_FILES
        views/iView.h
        )

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(hexagon ${SOURCE_FILES} ${VIEW_FILES} ${CONTROLLER_FILES} ${MODEL_FILES} ${INTERFACE_FILES})

target_link_libraries(hexagon Qt5::Widgets)

add_subdirectory(unit_tests)