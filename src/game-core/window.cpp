#include "window.hpp"

void Game::Window::run()
{

    sf::RenderWindow window(sf::VideoMode(1280, 
                                          720), 
                                          "gameX");

    Game::Player player1; 

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        Game::Movement::keyboardInput(player1); 

        window.clear();
        window.draw(player1.getPlayer()); 
        window.display();

    }


    

}