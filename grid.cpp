#include <iostream>
#include "grid.h"


Grid::Grid(int a, int b) : x{a}, y{b}, size{a*b}{}



void Grid::foo(){

  std::cout << "foo called\n";
}
