#pragma once
#include <SFML/Graphics.hpp>
#include "player.hpp"

namespace Game
{
    class Movement
    {

    public:
        static void keyboardInput(Game::Player &player) ; 
        static const double speed; 
    }; 
        
} 