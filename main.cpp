/**
 * A Simple Hello World with SFML.
 *
 * Build: g++ -o sfml_hello sfml_hello.cpp -lsfml-graphics -lsfml-window
 * -lsfml-system
 */

#include <SFML/Window.hpp>
#include <string>
#include <vector>

#ifndef MAIN_H
#define MAIN_H

class Mamalakis
{
private:
public:
  Mamalakis();
  virtual ~Mamalakis();
};

#endif /* MAIN_H */

int main()
{
  sf::Window window(sf::VideoMode(640, 480), "Hello world!");
  int x = 10;
  int y = 11;
  int z;
  std::string loko = "koko";
  sf::Vector2f mamama;
  sf::Vector3<int> c;
  Mamalakis *m = new Mamalakis();
  sf::sleep(sf::seconds(2));
  std::vector<int> vakaa;
  mamama.x = 0;
  mamama.y = 10;
  // m -> delete();

  ;
}
