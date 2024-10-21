cmake_minimum_required(VERSION 3.29)
project(CppTron)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppTron main.cpp
        tron/Grid.cpp
        tron/Grid.h
        tron/LightCycle.cpp
        tron/LightCycle.h
        tron/tile/Tile.cpp
        tron/tile/Tile.h
        tron/tile/Empty.cpp
        tron/tile/Empty.h
        tron/Player.cpp
        tron/Player.h
        tron/Game.cpp
        tron/Game.h
        tron/tile/Sprite.cpp
        tron/tile/Sprite.h
        tron/Utils.cpp
        tron/Utils.h
        tron/Direction.cpp
        tron/Direction.h
        asciiscreen/AsciiScreen.cpp
        asciiscreen/AsciiScreen.h
)
