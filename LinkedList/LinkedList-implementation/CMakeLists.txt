cmake_minimum_required(VERSION 3.31)
project(LinkedList C)

set(CMAKE_C_STANDARD 11)

add_executable(LinkedList main.c
        Linkedlist.c
        Linkedlist.h)
