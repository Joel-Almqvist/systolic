#ifndef grid_h
#define grid_h

#include "matrix.h"
#include "processor.h"

class Grid{
private:

  Processor* pgrid;

public:

  Grid(int a, int b);
  ~Grid();

  Matrix calc(Matrix& m1, Matrix& m2);


  const int size;
  const int x;
  const int y;


};

#endif
