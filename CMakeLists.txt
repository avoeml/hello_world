cmake_minimum_required(VERSION 3.19)

project(HelloWorldCounter)

add_executable(HelloWorldCounter src/main.c)

install(TARGETS anton DESTINATION bin)
 