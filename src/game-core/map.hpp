#pragma once 
#include <SFML/Graphics.hpp>
#include <vector>

class Map {
    private: 
       std::vector<sf::RectangleShape> m_platform;  

    public: 
        Map(); 
        bool checkCollison(); 
        

}; 