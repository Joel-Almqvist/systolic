#include "grid.h"


Grid::Grid(int a, int b) :
  x{a},
  y{b},
  size{a*b},
  pgrid{(Processor*) calloc(a * b, sizeof(Processor))}

  {
    // Init objects in allocated space
    Processor* p;
    for(unsigned int i = 0; i < size; i++){
      p = new(pgrid + i) Processor(i, size);
  }


  }

Grid::~Grid(){
  free(pgrid);
}


Matrix Grid::calc(Matrix& m1, Matrix& m2){

  // TODO Revise this
  unsigned int max_it = x + (x - 3);

  for(unsigned int it; it < max_it; it++){
    for(unsigned int i; i < size; i++){
      pgrid[i].calc(it, m1, m2);
    }

  }



  return Matrix{4, 4};
}
