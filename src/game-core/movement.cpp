#include "movement.hpp"


const double Movement::speed = 0.1; 

void Movement::keyboardInput(Player &player)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::H)) player.movePlayer(-speed,0); 
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::J)) player.movePlayer(0,speed); 
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::K)) player.movePlayer(0,-speed); 
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::L)) player.movePlayer(speed,0); 
};
