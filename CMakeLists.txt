cmake_minimum_required(VERSION 3.25)
project(POO)

set(CMAKE_CXX_STANDARD 17)

add_executable(POO main.cpp
        Store/Product/Product.cpp
        Store/Product/Product.h
        Menu/Menu.cpp
        Menu/Menu.h
        Store/Store.cpp
        Store/Store.h
        Utils/Utils.cpp
        Utils/Utils.h Store/Product/ProductService.cpp Store/Product/ProductService.h
        Utils/consts.cpp
        Utils/consts.h)
