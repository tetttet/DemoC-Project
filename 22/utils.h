#pragma once
#include <iostream>
#include <iomanip>


template<typename T>
void print(T a, T b) {
  std::cout << "a = " << a << ", b = " << b << "\n";
}



template<typename T>
void printArray(const T *arr, const size_t size, bool printAll = false, const int width = 8) {
  if (size <= 10 || printAll) {
    for (size_t i = 0; i < size; i++) {
      std::cout << std::setw(width) << arr[i];
    }
    if (printAll) {
      std::cout << "\n";
      return;
    }
  } else {
    for (size_t i = 0; i < 4; i++) {
      std::cout << std::setw(width) << arr[i];
    }
    std::cout << " . . . . . . . . . ";
    for (size_t i = size - 4; i < size; i++) {
      std::cout << std::setw(width) << arr[i];
    }
  }
  std::cout << "\n";
}


template <typename T>
T *createRandomArray(size_t size, int min = 0, int max = RAND_MAX) {
  T *arr = new T[size] {};
  srand(time(0));
  for (size_t i = 0; i < size; i++) {
    arr[i] = min +  rand() % (max - min);
  }
  return arr;
}
