project(mcqui)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)
include_directories(${Qt5Widgets_INCLUDES})
add_definitions(${Qt5Widgets_DEFINITIONS})

set(CMAKE_CXX_FLAGS "-fPIC ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")

find_package(QuaZip-Qt5)

add_executable(mcqui
	src/main.cpp

	include/mainwindow.h
	include/enventoryslotwidget.h
	src/mainwindow.cpp
	src/enventoryslotwidget.cpp
)

target_link_libraries(mcqui
	${Qt5Widgets_LIBRARIES}
	QuaZip::QuaZip
)
