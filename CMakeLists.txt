cmake_minimum_required(VERSION 3.19)
project(data_structures)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

add_executable(data_structures src/main.cpp linked_list/implementation/singlyLinkedList.cpp linked_list/implementation/doublyLinkedList.cpp linked_list/implementation/circularSinglyLinkedList.cpp linked_list/practice/linkedListPractice.cpp)