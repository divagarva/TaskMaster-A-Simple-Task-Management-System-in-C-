cmake_minimum_required(VERSION 3.27)
project(TaskMaster__A_Simple_Task_Management_System_in_C__)

set(CMAKE_CXX_STANDARD 17)

add_executable(TaskMaster__A_Simple_Task_Management_System_in_C__ main.cpp
        TaskManager.cpp
        TaskManager.h
        Task.cpp
        Task.h
        t.cpp)
