cmake_minimum_required(VERSION 3.28)
project(To_Do_List)

set(CMAKE_CXX_STANDARD 17)

add_executable(To_Do_List main.cpp
        Task.h
        TaskManager.h)
