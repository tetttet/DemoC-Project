#pragma once
#include <iostream>
#include <iomanip>
#include "utils.h"
using namespace std;


void matrixDemo() {
  const size_t nRows = 3;
  const size_t nCols = 4;

  double m[nRows][nCols] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9,10,11}
  };

  //work
  for (size_t i = 0; i < nRows; i++) {
    for (size_t j = 0; j < nCols; j++) {
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
  
  //or
  printMatrix((double*)m, nRows, nCols);
}
