cmake_minimum_required(VERSION 3.5)

project(AndroidSOfileCreation)  # Update to your project name

add_library(
    CLI2_lib
    SHARED
    CLI2Hook.cpp
    cpp/CLI2Realtime.cpp
    cpp/rt_nonfinite.cpp
    cpp/rtGetInf.cpp
    cpp/rtGetNaN.cpp
)
