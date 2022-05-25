#ifndef matrix_h
#define matrix_h


class Matrix{
private:
  int * m;
  int cols;
  int rows;
  int size;
public:

  Matrix(int r, int c);
  ~Matrix();

  Matrix& operator=(const Matrix& other);
  Matrix(const Matrix& other);

  Matrix(Matrix&& other);
  Matrix& operator=(Matrix&& other);

  int* const getMat(){ return m; }
  int const getCols(){ return cols; }
  int const getRows(){ return rows; }
  int const getSize(){ return size; }

  int& operator[](unsigned int i);
  int& operator()(unsigned int r, unsigned c);

  void rand();
  void print();

};
















#endif
