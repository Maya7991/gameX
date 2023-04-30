#include <SFML/Graphics.hpp>
#include "game-core/movement.hpp"

int main()
{
    // auto fullscreen = sf::VideoMode::getDesktopMode(); 

    sf::RenderWindow window(sf::VideoMode(1280, 720), "gameX");

    Game::Player player1; 

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        player1.movePlayer(0.1,0); 

        window.clear();
        window.draw(player1.getPlayer()); 
        window.display();

    }

    return 0;
}
