cmake_minimum_required(VERSION 3.18.1)

project(whiskeydb)

add_library(wdb SHARED kotlin-connection.cpp)

find_library(log-lib log)

target_link_libraries(wdb ${log-lib})