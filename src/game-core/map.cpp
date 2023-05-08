#include "map.hpp"

Map::Map() 
{


} 

sf::RectangleShape Map::createPlatform(const unsigned int length, const unsigned int height, 
                                  const double x_pos, const double y_pos) const
{

   sf::RectangleShape platform; 
   platform.setSize(sf::Vector2f(length,height)); 
   platform.setFillColor(sf::Color::Green); 
   platform.setPosition(x_pos, y_pos); 

   return platform; 

}; 