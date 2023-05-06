#pragma once
#include <SFML/Graphics.hpp>
#include "player.hpp"

class Movement
{

    public:
        static void keyboardInput(Player &player) ; 
        static const double speed; 
}; 
        