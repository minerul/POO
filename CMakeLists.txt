cmake_minimum_required(VERSION 3.27)
project(POO)

set(CMAKE_CXX_STANDARD 17)

add_executable(POO main.cpp
        Magazin/Produs.cpp
        Magazin/Produs.h
        Meniu.cpp
        Meniu.h
        Magazin/Magazin.cpp
        Magazin/Magazin.h
        Utils.cpp
        Utils.h)
