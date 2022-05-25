#include <iostream>

#include "grid.h"
#include "processor.h"
#include "matrix.h"


// Given  A = M x N, B = N x M and C = A x B
// then M = OUTER_DIM and N = INNER_DIM.
// C will always be of dimensions M x M
static const int OUTER_DIM = 2;
static const int INNER_DIM = 4;

int main(){
  Grid grid{OUTER_DIM};

  Matrix m1{OUTER_DIM, INNER_DIM};
  m1.rand();

  Matrix m2{INNER_DIM, OUTER_DIM};
  m2.rand();


  m1.print();
  std::cout << "\n\n";


  m2.print();
  std::cout << "\n\n";

  Matrix m3 = grid.calc(m1, m2);
  m3.print();

  return 0;
}
