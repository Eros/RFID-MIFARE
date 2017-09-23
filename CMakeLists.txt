cmake_minimum_required(VERSION 3.6)
project(RFID)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES library.c library.h)
add_library(RFID ${SOURCE_FILES})