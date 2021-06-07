cmake_minimum_required(VERSION 3.19)
project(linked_list)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

add_executable(linked_list main.cpp singleLinkedList.cpp lists.h util.h)