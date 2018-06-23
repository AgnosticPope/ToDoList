cmake_minimum_required (VERSION 2.8.11)
project(ListApp)

# Force C++14 support 
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable (listApp ListItem.cpp Main.cpp Node.cpp)

