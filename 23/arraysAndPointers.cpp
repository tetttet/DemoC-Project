#include <iostream>
#include <iomanip>
#include "utils.h"
using namespace std;


template <typename T>
void print(T *arr, T *first, T *last, bool inOrder = true) {
  if (inOrder) {
    while (first != last) {
      cout << setw(8) << *first;
      ++first;
    }
  } else {
    while (first != last) {
      --last;
      cout << setw(8) << *last;
    }
  }
  cout << "\n";
}


template <typename T>
void copyStep(T *arrIn, T *first, T *last, T *arrOut) {
  int64_t idx = 0;
  while (first != last) {
    arrOut[idx] = *first;
      ++idx;
      ++first;
  }
}


void arraysAndPointersDemo() {
  size_t size = 1'000'000;
  double *arr = new double [size] {};
  for (size_t i = 0; i < size; i++) {
    arr[i] = i * 10;
  }
  printArray(arr, 12, true);

  double *pFirst = arr + 6;
  double *pLast = arr + 10;
  print(arr, pFirst, pLast, true);
  print(arr, pFirst, pLast, false);
  cout << "\n";
  return;

  double *arrOut = new double [pLast - pFirst] {};
  copyStep(arr, pFirst, pLast, arrOut);
  printArray(arrOut, pLast - pFirst);

  delete[] arr;
  delete[] arrOut;
}