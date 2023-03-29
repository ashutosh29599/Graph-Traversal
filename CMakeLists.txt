cmake_minimum_required(VERSION 3.24)
project(Graph_Traversal)

set(CMAKE_CXX_STANDARD 17)

add_executable(Graph_Traversal Graph/main.cpp Graph/graph.h Graph/graph.cpp)

#add_executable(leastSquareFitting main.cpp fullMatrix.cpp)