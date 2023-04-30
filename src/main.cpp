#include <SFML/Graphics.hpp>
#include <iostream>
#include "game-core/player.hpp"

int main()
{

    
    // auto fullscreen = sf::VideoMode::getDesktopMode(); 

    sf::RenderWindow window(sf::VideoMode(1280, 720), "gameX");

    Game::Player player1; 
    // sf::RectangleShape player_shape = player1.getPlayer(); 

    auto x_pos = player1.getPlayer().getPosition().x;
    std::cout << "x_pos: " << x_pos << std::endl; 
    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        window.draw(player1.getPlayer()); 
        window.display();
    }

    return 0;
}
