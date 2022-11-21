#pragma once
#include <iostream>
#include "utils.h"
using namespace std;

void sortBubbleDemo() {
  //const int nSize = 2000;
  const int nSize = 20;
  int arr[nSize];
  srand(time(0));
  for (size_t i = 0; i < nSize; i++) {
    arr[i] = rand();
  }
  printIntArr(arr, 20, 6);
  cout << "\n";
  for (size_t i = 0; i < nSize - 1; i++) {
    for (size_t j = 0; j < nSize - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
    printIntArr(arr, 20, 6);
    printIndex(nSize - i - 1, 6);

  }
  printIntArr(arr, 20, 6);
}

