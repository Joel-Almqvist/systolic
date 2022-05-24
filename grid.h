#ifndef grid_h
#define grid_h

#include <iostream>
#include <algorithm>
#include <cassert>


#include "matrix.h"
#include "processor.h"

class Grid{
private:

  Processor* pgrid;

public:

  Grid(int d);
  ~Grid();

  Matrix calc(Matrix& m1, Matrix& m2);

  //void print();

  const int size;
  const int dim;


};

#endif
