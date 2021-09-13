cmake_minimum_required(VERSION 3.19)

project(HelloWorldCounter)

add_executable(print_count src/main.c)

install(TARGETS print_count DESTINATION bin)
 