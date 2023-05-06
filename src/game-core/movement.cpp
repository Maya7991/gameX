#include "movement.hpp"


const double Movement::m_speed = 0.1; 

void Movement::keyboardInput(Player &player)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::H)) player.movePlayer(-m_speed,0); 
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::J)) player.movePlayer(0,m_speed); 
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::K)) player.movePlayer(0,-m_speed); 
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::L)) player.movePlayer(m_speed,0); 
};
