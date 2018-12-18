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

class Psinakis
{
private:
  int psi;
  std::string rara;

public:
  Psinakis();
  virtual ~Psinakis();
};

#endif /* MAIN_H */

int main()
{
  sf::Window window(sf::VideoMode(640, 480), "Hello world!");
  int x = 10;
  int y = 11;
  int a = 10;
  int z;

  z = 10;

  std::string vava = "http:/google.com";
  sf::Vector2f mamama;
  sf::Vector3<int> c;
  Psinakis* m = new Psinakis();
  sf::sleep(sf::seconds(2));
  std::vector<int> momo;
  momo.pop_back();
  vava.append("mimi");
  vava.max_size();
  vava.max_size();
  mamama.y = 10;
  mamama.x = 29;


  momo.emplace_back(2);
  // m -> delete();
}
