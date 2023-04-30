#include "player.hpp"

Game::Player::Player() 
{

    rectangle.setSize(sf::Vector2f(100, 50));
    rectangle.setPosition(10, 20);

}; 

sf::RectangleShape Game::Player::getPlayer()
{

    return rectangle; 

}