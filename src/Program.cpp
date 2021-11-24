#include <SFML/Graphics.hpp>
#include <sstream>
#include "Graph.h"
#include "Program.h"


Program::Program()
{

}

void Program::run()
{
    sf::Clock clock{};
    double const fps{60.0};
    while (window.isOpen())
    {
        //current_state->update();
        //current_state->draw();
        window.display();
        //set_state(state_machine.get_state());
        print_titlebar(clock, fps);
    }
    
}

void Program::print_titlebar(sf::Clock &clck, double const &fps)
{
    std::stringstream ss;
    ss << "Visualisering | Current framerate: " << fps << " (LOCKED) | Possible framerate: " << (1 / clck.getElapsedTime().asSeconds());
    window.setTitle(ss.str());
    sleep(sf::milliseconds(1000.0 / fps) - clck.getElapsedTime());
    clck.restart();
}


sf::RenderWindow Program::window{sf::VideoMode{1920, 1080}, "Visualisering", sf::Style::Default};