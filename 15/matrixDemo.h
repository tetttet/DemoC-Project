#pragma once
#include <iostream>
#include <iomanip>
#include "utils.h"
using namespace std;


void introDemo() {
  const size_t nRows = 3;
  const size_t nCols = 4;

  double m[nRows][nCols] {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9,10,11}
  };

  //work
  for (size_t i = 0; i < nRows; i++) {
    for (size_t j = 0; j < nCols; j++) {
      //...
      m[i][j] *= 10;
    }
  }

  //print
  for (size_t i = 0; i < nRows; i++) {
    for (size_t j = 0; j < nCols; j++) {
      cout << setw(4) << m[i][j];
    }
    cout << "\n";
  }
  cout << "\n";

  //return;
  //or
  printMatrix((double*)m, nRows, nCols);
}


void workWithRowsColums() {
  const size_t nRows = 3;
  const size_t nCols = 4;

  double m[nRows][nCols] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9,10,11}
  };

  //работа со строками
  int iRow = 1;
  for (int j = 0; j < nCols; j++) {
    cout << setw(6) << m[iRow][j];
    //
  }
  cout << "\n";

  double min = m[iRow][0];
  double sum = 0;
  for (int j = 1; j < nCols; j++) {
    if (m[iRow][j] < min) {
      min = m[iRow][j];
    }
    sum += m[iRow][j];
  }
  cout << "min = " << min << "\n";
  cout << "sum = " << sum << "\n";
  
  
  //сохранение суммы всех строк в массиве rowsSumArr
  double rowsSumArr[nRows]{};
  for (int i = 0; i < nRows; i++) {
    sum = 0;
    for (int j = 0; j < nCols; j++) {
      sum += m[i][j];
    }
    rowsSumArr[i] = sum;
  }

  for (size_t i = 0; i < nRows; i++) {
    for (size_t j = 0; j < nCols; j++) {
      cout << setw(4) << m[i][j];
    }
    cout << "\n";
  }
  cout << "\n\n";

  for (size_t i = 0; i < nRows; i++) {
    cout << setw(4) << rowsSumArr[i] << "\n";
  }
}



void diagonalsDemo() {
  const size_t nRows = 10;
  const size_t nCols = 10;
  double m[nRows][nCols]{};

  int nShift = 2;
  
  //диагональ, параллельная главной, верхняя часть
  for (size_t i = 0, j = nShift; j < nCols; i++, j++) {
    m[i][j] = 1;
  }
  //диагональ, параллельная главной, нижняя часть
  for (size_t i = nShift, j = 0; i < nRows; i++, j++) {
    m[i][j] = 1;
  }
  printMatrix((double *)m, nRows, nCols);
}



void triangleMatrixDemo() {
  const size_t nRows = 10;
  const size_t nCols = 10;
  double m[nRows][nCols]{};

  for (size_t i = 0; i < nRows; i++) {
    for (size_t j = 0; j < nCols; j++) {
      if (j >= i) {
        m[i][j] = 1;
      }
    }
  }
  printMatrix((double *)m, nRows, nCols);
}



void matrixDemo() {
  //introDemo();
  //workWithRowsColums();
  //diagonalsDemo();
  triangleMatrixDemo();
}