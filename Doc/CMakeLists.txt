cmake_minimum_required(VERSION 2.8)
project( avtomat )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( avtomat avtomat.cpp )
target_link_libraries( avtomat ${OpenCV_LIBS} )