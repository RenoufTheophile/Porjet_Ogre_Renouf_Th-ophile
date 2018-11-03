cmake_minimum_required(VERSION 3.12)
project(main_c C)

set(CMAKE_C_STANDARD 99)

add_executable(main_c main.c foret.c foret.h)