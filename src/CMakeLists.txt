cmake_minimum_required(VERSION 3.10)

project(DELI_SHOP VERSION 1.0)

set(SOURCES Main.cpp Cart.hpp Deli.hpp Price_List.hpp Revenue.hpp Scale.hpp)

add_executable(DELI_SHOP ${SOURCES})