#ifndef grid_h
#define grid_h

#include <iostream>
#include <algorithm>
#include <cassert>
#include <cstring>

#include "matrix.h"
#include "processor.h"

class Grid{
private:
  Processor* pgrid;

public:

  Grid(int d);
  ~Grid();

  Matrix calc(Matrix& m1, Matrix& m2);

  const int size;

  // A grid is always assumed to be a square for simplicity
  const int dim;
};

#endif
