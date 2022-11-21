#pragma once
#include <iostream>
#include <iomanip>


int findMax_(int arr[], size_t sz) {
  //...
  return 0;
}

int64_t findMax_(int64_t arr[], size_t sz) {
  //...
  return 0;
}

float findMax_(float arr[], size_t sz) {
  //...
  return 0;
}

double findMax_(double arr[], size_t sz) {
  //...
  return 0;
}


template<typename T>
T findMax(T arr[], size_t sz) {
  T max = arr[0];
  for (size_t i = 1; i < sz; i++) {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}



template<typename T>
void printArr(T arr[], size_t nSize, int width = 6) {
  for (size_t i = 0; i < nSize; i++) {
    std::cout << std::setw(width) << arr[i];
  }
  std::cout << '\n';
}




template<typename T>
T minStep(T a, T b) {
  return (a < b) ? a : b;
}


template<typename T>
T minStep(T a, T b, T c) {
  T min = minStep(a, b);
  return (min < c) ? min : c;
}


template<typename T>
T minStep(T a, T b, T c, T d) {
  T min = minStep(a, b, c);
  return (min < d) ? min : d;
}


template<typename T>
T sumArray(T arr[], int nSize) {
  T sum = 0;
  // . . .
  // . . ;.
  //
  return sum;
}


void sumArrayDemo() {
  //
  //
  //
  //
  // double sum = sumArray<double>(arrDouble, nSize);
  // cout << "sum = " << sum;

}
