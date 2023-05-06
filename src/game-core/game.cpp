#include "game.hpp"

Game::Game (double horizontal_resolution, double vertical_resolution) 
        :  m_window(sf::VideoMode(horizontal_resolution, 
                                  vertical_resolution), "gameX") 
            
{


}; 


void Game::run()
{

    while (m_window.isOpen())
    {
        
        processEvents(); 
  
        update(); 

        render(); 

    }
}

void Game::processEvents()
{
    sf::Event event;
    while (m_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            m_window.close();
    }
}; 

void Game::update()
{
        Movement::keyboardInput(m_player); 
}; 

void Game::render()
{
    m_window.clear();
    m_window.draw(m_player.getPlayerShape()); 
    m_window.display();
}