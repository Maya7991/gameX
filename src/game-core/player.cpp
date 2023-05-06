#include "player.hpp"
#include <iostream>

Player::Player() 
{

    player_shape.setSize(sf::Vector2f(100, 100));
    player_shape.setPosition(600, 350);
    player_shape.setFillColor(sf::Color::Red);

}; 

sf::RectangleShape Player::getPlayer()
{

    return player_shape; 

}

void Player::movePlayer(const double &x_velocity, const double &y_velocity)
{
    sf::Vector2f position = player_shape.getPosition(); 
    position.x += x_velocity; 
    position.y += y_velocity; 

    std::cout << "Position (x,y): " << position.x << ", " << position.y << std::endl; 
    player_shape.setPosition(position); 
}
