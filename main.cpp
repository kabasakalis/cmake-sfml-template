/**
 * A Simple Hello World with SFML.
 *
 * Build: g++ -o sfml_hello sfml_hello.cpp -lsfml-graphics -lsfml-window
 * -lsfml-system
 */

#include <SFML/Window.hpp>
#include <vector>

int main() {
  sf::Window window(sf::VideoMode(640, 480), "Hello world!");

  sf::sleep(sf::seconds(2));
  sf::Vector2f avector;
  sf::Vector3<int> c;
  std::vector<int> v;
}
