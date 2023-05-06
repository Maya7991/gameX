#include <SFML/Graphics.hpp>
#include "game-core/player.hpp"
#include "game-core/window.hpp"

double Window::horizontal_resolution = 1280; 
double Window::vertical_resolution = 720; 

int main()
{

    Window::run(); 
    return 0;

}
