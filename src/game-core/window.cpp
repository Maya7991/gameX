#include "window.hpp"

void Window::run()
{

    sf::RenderWindow window(sf::VideoMode(horizontal_resolution, 
                                          vertical_resolution), 
                                          "gameX");

    Player player1; 

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        Movement::keyboardInput(player1); 

        window.clear();
        window.draw(player1.getPlayer()); 
        window.display();

    }


}