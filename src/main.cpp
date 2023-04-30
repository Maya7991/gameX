#include <SFML/Graphics.hpp>
#include <iostream>
#include "game-core/player.hpp"

int main()
{

    
    auto fullscreen = sf::VideoMode::getDesktopMode(); 

    sf::RenderWindow window(sf::VideoMode(fullscreen.width, 
			    fullscreen.height, 
			    fullscreen.bitsPerPixel), "gameX");

    // Game::Player player1; 

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        // window.draw(player1.getPlayer());

        window.clear();
        window.display();
    }

    return 0;
}
