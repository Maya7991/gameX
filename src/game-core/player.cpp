#include "player.hpp"

Game::Player::Player() 
{

    rectangle.setSize(sf::Vector2f(100, 100));
    rectangle.setPosition(600, 350);
    rectangle.setFillColor(sf::Color::Red);

}; 

sf::RectangleShape Game::Player::getPlayer()
{

    return rectangle; 

}