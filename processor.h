#ifndef proc_h
#define proc_h

#include <iostream>

#include "matrix.h"

class Processor{
  private:

    friend class Grid;

  public:

    Processor(int id);
    int id;

    void calc(
      Matrix& m1,
      Matrix& m2,
      unsigned int iteration,
      unsigned int dim,
      Matrix& out
    );




};








#endif
