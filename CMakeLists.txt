cmake_minimum_required(VERSION 3.5)
project(gameX)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

add_executable(main src/main.cpp)
add_library(core SHARED
    src/game-core/game.hpp
    src/game-core/game.cpp
    src/game-core/player.hpp
    src/game-core/player.cpp
    src/game-core/movement.hpp
    src/game-core/movement.cpp
    )


target_link_libraries(main PUBLIC 
    core
    sfml-graphics
)

