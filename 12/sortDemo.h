#pragma once
#include <iostream>
#include "utils.h"
using namespace std;


void isSorted() {
  const int n = 8;
  int arr[n]{ 0, 1, 2, 3, 4, 5, 6, 7 };
  //int arr[n]{ 0, 1, 4, 3, 4, 5, 6, 7 };
  printIntArr(arr, n);

  bool result = true;
  for (size_t i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      result = false;
      break;
    }
  }
  cout << "isSorted = " << (result ? "true\n" : "false\n");
}


void sortDemo() {
  isSorted();

}