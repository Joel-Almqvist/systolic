#include "grid.h"


Grid::Grid(int d) :
  dim{d},
  size{d*d},
  pgrid{(Processor*) calloc(d * d, sizeof(Processor))}

  {
    // Init objects in allocated space
    Processor* p;
    for(unsigned int i = 0; i < size; i++){
      p = new(pgrid + i) Processor(i);
  }


  }

Grid::~Grid(){
  free(pgrid);
}


Matrix Grid::calc(Matrix& m1, Matrix& m2){


  // We only handle cases where the resulting matrix is a square
  assert(
    m1.cols == m2.rows  &&
    m1.rows == m2.cols &&
    m1.rows == dim);


  // We need m1.rows + (dim - 1) iterations for the last element
  // to perform its first iteration. Then it performs the remaining iterations
  unsigned int max_it = m1.rows + (dim - 1) + (m1.cols - 1);
  Matrix out{dim, dim};

  for(unsigned int it = 0; it < max_it; it++){

    // Note this loop should be done in parallel in a proper implementation
    for(unsigned int i = 0; i < size; i++){
      pgrid[i].calc(m1, m2, it, dim, out);
    }

  }



  return Matrix{4, 4};
}

/*
void Grid::print(){

  for(unsigned int i = 0; i < size; i++){



    std::cout << pgrid[i].acc << ", ";

    if((i + 1) % dim == 0){
      std::cout << "\n";
    }
  }
}
*/
