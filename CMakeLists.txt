cmake_minimum_required(VERSION 3.19)
project(Game_Administration_System)

set(CMAKE_CXX_STANDARD 11)

add_executable(Game_Administration_System main.cpp game.cpp game.h game_expansion.cpp game_expansion.h io.cpp io.h)