#pragma once
#include <iostream>
#include <algorithm>
#include "utils.h"
using namespace std;


void isSorted() {
  const int nSize = 8;
  //int arr[]{0, 1, 2, 3, 4, 5, 6, 7};
  int arr[nSize]{ 0, 1, 4, 3, 4, 5, 6, 7 };
  printIntArr(arr, nSize);

  bool result = true;
  for (size_t i = 0; i < nSize - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      result = false;
      break;
    }
  }
  cout << "isSorted = " << (result ? "true\n" : "false\n");
}



void librarySort() {
  const int nSize = 20;
  int arr[nSize];
  srand(time(0));
  for (size_t i = 0; i < nSize; i++) {
    arr[i] = rand();
  }
  printIntArr(arr, nSize);

  sort(arr, arr + nSize);
  printIntArr(arr, nSize);
}



void sortDemo() {
  //isSorted();
  librarySort();

}