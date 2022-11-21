#pragma once
#include <iostream>
#include "utils.h"
using namespace std;

void sortBubbleDemo() {
  //const int n = 2000;
  const int n = 20;
  int arr[n];
  srand(time(0));
  for (size_t i = 0; i < n; i++) {
    arr[i] = rand();
  }
  printIntArr(arr, 20, 6);
  cout << "\n";
  for (size_t i = 0; i < n - 1; i++) {
    for (size_t j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
    printIntArr(arr, 20, 6);
    printIndex(n - i - 1, 6);

  }
  printIntArr(arr, 20, 6);
}

