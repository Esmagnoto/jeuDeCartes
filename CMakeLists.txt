cmake_minimum_required(VERSION 3.26)
project(jeuDeCartes)

set(CMAKE_CXX_STANDARD 17)

add_executable(jeuDeCartes main.cpp
        Deck.h
        Deck.cpp
        Carte.h)
