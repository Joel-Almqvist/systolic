#include <iostream>

#include "grid.h"
#include "processor.h"
#include "matrix.h"

int main(){

  Grid grid{4, 4};

  Processor p{};

  Matrix m1{4,4};

  m1.rand();
  m1.print();



  return 0;
}
