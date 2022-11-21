#pragma once
#include <iostream>
#include "utils.h"
using namespace std;

void sortSelectionDemo() {
  const int nSize = 10;
  //int arr[nSize]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  int arr[nSize]{ 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

  //const int nSize = 2;
  //int arr[nSize]{ 9, 8 };
  //const int nSize = 1;
  //int arr[nSize]{ 9 };

  srand(time(0));
  for (size_t i = 0; i < nSize; i++) {
    arr[i] = rand();
  }

  printIntArr(arr, nSize);
  cout << "\n";

  for (int i = 0; i < nSize - 1; i++) {
    int current = arr[i];

    //поиск минимального
    int idxMin = i;
    int min = arr[i];
    for (int j = i + 1; j < nSize; j++) {
      if (arr[j] < min) {
        idxMin = j;
        min = arr[j];
      }
    }
    //обмен
    if (idxMin != i) {
      int temp = arr[i];
      arr[i] = arr[idxMin];
      arr[idxMin] = temp;
    }
  }

  printIntArr(arr, nSize);
}