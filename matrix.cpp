#include <stdlib.h>
#include <experimental/random>
#include <iostream>
#include <cstring>

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


Matrix::Matrix(const Matrix& other) :
  rows{other.rows},
  cols{other.cols},
  size{other.size},
  m{(int*) std::malloc(other.rows * other.cols * sizeof(int))}
{
  std::memcpy(m, other.m, rows * cols * sizeof(int));
}

Matrix& Matrix::operator=(const Matrix & other){
  rows = other.rows;
  cols = other.cols;
  size = other.size;

  std::memcpy(m, other.m, rows * cols * sizeof(int));
  return *this;
}

Matrix::Matrix(Matrix&& other) :
  rows{other.rows},
  cols{other.cols},
  size{other.size},
  m{other.m}
  {
  other.m = nullptr;
}

Matrix& Matrix::operator=(Matrix&& other){
  free(m);
  m = other.m;
  other.m = nullptr;

  rows = other.rows;
  cols = other.cols;
  size = other.size;
  return *this;
}


void Matrix::rand(){
  for(unsigned int i = 0; i < size; i++){
    m[i] = std::experimental::randint(-1, 1);
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
