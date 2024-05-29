cmake_minimum_required(VERSION 3.25)
project(POO)

set(CMAKE_CXX_STANDARD 17)

add_executable(POO main.cpp
        Store/Product/Product.cpp
        Store/Product/Product.h
        Store/Store.cpp
        Store/Store.h
        Utils/Utils.cpp
        Utils/Utils.h Store/Product/ProductService.cpp Store/Product/ProductService.h
        Utils/consts.cpp
        Utils/consts.h
        Register/Register.cpp
        Register/Register.h
        Customer.cpp
        Customer.h
        Meniu/MainMenu.cpp
        Meniu/MainMenu.h
        Meniu/ManagerMenu.cpp
        Meniu/ManagerMenu.h
        Meniu/CustomerMenu.cpp
        Meniu/CustomerMenu.h
        Cart/Cart.cpp
        Cart/Cart.h
        Cart/CartService.cpp
        Cart/CartService.h.//
        Meniu/Menu.cpp
        Meniu/Menu.h
        Receipt/Receipt.cpp
        Receipt/Receipt.h
        Receipt/ReceiptService.cpp
        Receipt/ReceiptService.h
        Register/RegisterService.cpp
        Register/RegisterService.h
        Payment/Payment.cpp
        Payment/Payment.h
        Payment/PaymentService.cpp
        Payment/PaymentService.h
        Payment/Card.cpp
        Payment/Card.h
        Payment/Cash.cpp
        Payment/Cash.h
        Payment/Revolut.cpp
        Payment/Revolut.h
        Receipt/ReceiptBuilder.cpp
        Receipt/ReceiptBuilder.h
)
