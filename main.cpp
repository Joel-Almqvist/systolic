#include <iostream>

#include "grid.h"
#include "processor.h"
#include "matrix.h"

static const int DIM = 4;


int main(){

  Grid grid{DIM};

  Matrix m1{DIM, DIM};
  //m1.rand();

  /*
  m1.m[0] = 2;
  m1.m[1] = -3;
  m1.m[2] = -3;
  m1.m[3] = -2;
  */

  Matrix m2{DIM, DIM};
  //m2.rand();

  /*
  m2.m[0] = 1;
  m2.m[1] = -5;
  m2.m[2] = 2;
  m2.m[3] = -2;
  */


  for(int i = 0; i < DIM * DIM; i++){
    m1.m[i] = i;
    m2.m[i] = i;
  }


  m1.print();

  std::cout << "\n\n";

  m2.print();

  std::cout << "\n\n";

  Matrix m3{grid.calc(m1, m2)};

  // TODO Add copy constructor to matrix class
  m3.print();

  //grid.print();

  return 0;
}
