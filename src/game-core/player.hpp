#include <SFML/Graphics.hpp>

namespace Game
{
    class Player
    {
        private: 
            sf::RectangleShape rectangle; 
        public:
            Player();

            sf::RectangleShape getPlayer(); 
    };
       
} 