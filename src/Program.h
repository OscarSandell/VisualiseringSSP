#ifndef PROGRAM_H
#define PROGRAM_H
#include <SFML/Graphics.hpp>
#include "Graph.h"

class Program
{
public:
    Program();
    void run();
    static sf::RenderWindow window;

private:
    void print_titlebar(sf::Clock &, double const &);

    Graph Graf;
};

#endif