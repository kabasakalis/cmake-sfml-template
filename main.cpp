
/**
 * A Simple Hello World with SFML.
 *
 * Build: g++ -o sfml_hello sfml_hello.cpp -lsfml-graphics -lsfml-window -lsfml-system
 */

#include <SFML/Window.hpp>

int main() {
    sf::Window window(sf::VideoMode(640, 480), "Hello world!");
    sf::sleep(sf::seconds(10));

    return 0;
}
