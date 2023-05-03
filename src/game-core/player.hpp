#pragma once 
#include <SFML/Graphics.hpp>

namespace Game
{
    class Player
    {
        private: 
            sf::RectangleShape player_shape; 
        public:
            Player();
            // ~Player(); 

            sf::RectangleShape getPlayer(); 
            void movePlayer(const double &x_velocity, const double &y_velocity); 
    };
       
} 