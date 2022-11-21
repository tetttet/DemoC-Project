#pragma once
#include <iostream>
#include <iomanip>


template<typename T>
void print(T a, T b) {
  std::cout << "a = " << a << ", b = " << b << "\n";
}


template<typename T>
void printArr(T arr[], size_t nSize, int width = 6) {
  for (size_t i = 0; i < nSize; i++) {
    std::cout << std::setw(width) << arr[i];
  }
  std::cout << '\n';
}

