#include <iostream>

#include "grid.h"
#include "processor.h"
#include "matrix.h"

static const int DIM = 4;

int main(){
  Grid grid{DIM};

  Matrix m1{DIM, DIM};
  m1.rand();

  Matrix m2{DIM, DIM};
  m2.rand();

  /*
  for(int i = 0; i < DIM * DIM; i++){
    m1.getMat()[i] = i;
    m2.getMat()[i] = i;
  }
  */

  m1.print();
  std::cout << "\n\n";

  m2.print();
  std::cout << "\n\n";

  Matrix m3 = grid.calc(m1, m2);
  m3.print();

  return 0;
}
