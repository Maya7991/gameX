#pragma once 
#include <SFML/Graphics.hpp>
#include "player.hpp"
#include "movement.hpp"

class Game 
{
      private: 
            sf::RenderWindow m_window; 
            Player m_player; 
            double m_horizontal_resolution; 
            double m_vertical_resolution;  

      public:
            // Game();
            Game(double horizontal_resolution, double vertical_resolution); 
            void run();
            void processEvents(); 
            void update(); 
            void render();  
}; 