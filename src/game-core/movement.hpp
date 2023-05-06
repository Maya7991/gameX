#pragma once
#include <SFML/Graphics.hpp>
#include "player.hpp"

class Movement
{

    private: 
        static const double m_speed; 

    public:
        static void keyboardInput(Player &player) ; 
}; 
        