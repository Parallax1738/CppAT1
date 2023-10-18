cmake_minimum_required(VERSION 3.26)
project(Assignments)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        Assignments
        Contact.cpp
        Contact.h
        Node.h
        Node.cpp
        main.cpp
        Menu2.h
        Menu2.cpp
)
