cmake_minimum_required(VERSION 3.4)
#cmake_minimum_required(VERSION 2.8)

project(tic_tac_toe)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
#set(CMAKE_CXX_FLAGS “${CMAKE_CXX_FLAGS} -stdlib=libstdc++”)

set(SOURCE_FILES main.cpp m/Model.cpp m/Model.h Observer.hpp m/Model.cpp v/View.cpp v/View.h c/Controller.cpp c/Controller.h v/BarChartView.cpp v/BarChartView.h Event.cpp Event.h c/TableController.cpp c/TableController.h v/TableView.cpp v/TableView.h)
add_executable(tic_tac_toe ${SOURCE_FILES})
