#include <stdlib.h>
#include <experimental/random>
#include <iostream>

#include "matrix.h"


Matrix::Matrix(int r, int c) :
  rows{r},
  cols{c},
  size{r * c},
  m{(int*) std::calloc(r * c, sizeof(int))}
  {}

Matrix::~Matrix(){
  free(m);
}

int& Matrix::operator[](unsigned int i){

  return m[i];
}

int& Matrix::operator()(unsigned int r, unsigned int c){

  return m[c + r*cols];
}


void Matrix::rand(){

  for(unsigned int i = 0; i < size; i++){
    m[i] = std::experimental::randint(-5, 5);
  }
};


void Matrix::print(){

  for(unsigned int i = 0; i < size; i++){

    std::cout << m[i] << ", ";

    if((i + 1) % rows == 0){
      std::cout << "\n";
    }
  }
}
