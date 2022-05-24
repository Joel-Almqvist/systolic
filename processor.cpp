#include "processor.h"

// TODO Remove num_processors

void Processor::calc(
    Matrix& m1,
    Matrix& m2,
    unsigned int iteration,
    unsigned int dim,
    Matrix& out
  ){

    unsigned int my_col = id % dim;
    unsigned int my_row = id / dim;
    unsigned int my_start_it = my_col + my_row;
    unsigned int my_last_it = my_start_it + (dim - 1);




    if(iteration > my_last_it || iteration < my_start_it){

      //printf("It %d, PID %d does nothing\n", iteration, id);

      return;
    }

    unsigned int my_it_cntr = iteration - my_start_it;


    unsigned int last_val = dim - 1;

    out.m[id] += m1(my_row, last_val - my_it_cntr) * m2(last_val - my_it_cntr, my_col);


    /*
    printf("id = %d, start_it = %d, row = %d, col = %d\n",
      id, my_start_it, my_row, my_col);
    */


}

Processor::Processor(int id) :
  id{id}
  {};
