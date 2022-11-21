#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

void printIntArr(int arr[], size_t nSize, int width = 6) {
  for (size_t i = 0; i < nSize; i++) {
    cout << setw(width) << arr[i];
  }
  cout << '\n';
}


void printIndex(int idx, int width = 6) {
  for (size_t i = 0; i < idx * width + width/2; i++) {
    cout << ' ';
  }
  cout << "|\n";
}



void printMatrix(double *m, size_t nRows, size_t nCols, int width = 6) {

  for (size_t i = 0; i < nRows; i++) {
    for (size_t j = 0; j < nCols; j++) {
      cout << setw(4) << *(m + i*nCols + j);
    }
    cout << "\n";
  }
}