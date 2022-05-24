#ifndef matrix_h
#define matrix_h


class Matrix{
public:

  Matrix(int r, int c);
  ~Matrix();

  int * const m;

  int& operator[](unsigned int i);

  void rand();

  void print();


  const int cols;
  const int rows;
  const int size;




};
















#endif