#pragma once 
#include <SFML/Graphics.hpp>

class Player
{
    private: 
        sf::RectangleShape player_shape; 
    public:
        Player();
        sf::RectangleShape getPlayerShape(); 
        void movePlayer(const double &x_velocity, const double &y_velocity); 
};
       