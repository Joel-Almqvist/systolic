#include <iostream>

#include "grid.h"
#include "processor.h"

int main(){

  Grid grid{4, 4};
  grid.foo();

  Processor p{};
  int bar = 10;

  // test

  p.calc(0, &bar, &bar);

  return 0;
}
