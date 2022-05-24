#ifndef proc_h
#define proc_h

#include <iostream>

#include "matrix.h"

class Processor{
  private:

  public:

    Processor(int id, int id_tot);
    int id;
    int id_tot;

    void calc(unsigned int iteration, Matrix& m1, Matrix& m2);




};








#endif
