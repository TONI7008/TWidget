cmake_minimum_required(VERSION 3.14)
project(TWidget LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

set(SOURCES
    main.cpp
    widget.cpp
    twidget.cpp
)

set(HEADERS
    widget.h
    twidget.h
)

qt6_wrap_ui(UI_HEADERS widget.ui)
qt6_wrap_cpp(MOC_SOURCES ${HEADERS})

add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
    ${MOC_SOURCES}
    ${UI_HEADERS}
)

# Include build directory for ui_*.h
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(${PROJECT_NAME}
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)
