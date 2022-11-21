#pragma once
#include <iostream>
#include "utils.h"
using namespace std;

void lastSearch() {
  const int nSize = 10;
  int arr[nSize]{0, 10, 20, -30, 40, -50, -60, 70, -80, 90};  // 8
  //int arr[nSize]{0, 10, 20, 30, 40, 50, 60, 70, 80, 90};  // -1

  int idxLast = -1;
  for (int i = nSize - 1; i >= 0; i--) {
    if (arr[i] < 0) { //условие может быть любым!!! 
      idxLast = i;
      break;
    }
  }

  printIntArr(arr, nSize);
  cout << "idxLast = " << idxLast << "\n";
}




void firstAndLastSearch() {
  const int nSize = 10;
  int arr[nSize]{0, 10, 20, -30, 40, -50, -60, 70, -80, 90};    // 3 and 8
  //int arr[nSize]{0, 10, 20, -30, -40, 50, 0, 70, 80, 90};     // 3 and 4
  //int arr[nSize]{0, 10, 20, -30, 40, 50, 0, 70, 80, 90};      // 3 and 3
  //int arr[nSize]{0, 10, 20, 30, 40, 50, 0, 70, 80, 90};       // -1 and -1

  int idxFirst = -1;
  int idxLast = -1;
  bool isFirstFound = false;
  for (size_t i = 0; i < nSize; i++) {
    if (arr[i] < 0) { //условие может быть любым!!! 
      if (!isFirstFound) {
        idxFirst = i;
        isFirstFound = true;
      }
      idxLast = i;
    }
  }

  printIntArr(arr, nSize);
  cout << "idxFirst = " << idxFirst << ", idxLast = " << idxLast << "\n";
}



void firstAndLastOptimalSearch() {
  const int nSize = 10;
  int arr[nSize]{0, 10, 20, -30, 40, -50, -60, 70, -80, 90};    // 3 and 8
  //int arr[nSize]{0, 10, 20, -30, -40, 50, 0, 70, 80, 90};     // 3 and 4
  //int arr[nSize]{0, 10, 20, -30, 40, 50, 0, 70, 80, 90};      // 3 and 3
  //int arr[nSize]{0, 10, 20, 30, 40, 50, 0, 70, 80, 90};       // -1 and -1

  int idxFirst = -1;
  for (int i = 0; i < nSize; i++) {
    if (arr[i] < 0) { //условие может быть любым!!! 
      idxFirst = i;
      break;
    }
  }

  int idxLast = -1;
  for (int i = nSize - 1; i >= 0; i--) {
    if (arr[i] < 0) { //условие может быть любым!!! 
      idxLast = i;
      break;
    }
  }

  printIntArr(arr, nSize);
  cout << "idxFirst = " << idxFirst << ", idxLast = " << idxLast << "\n";
}


void searchDemo() {
  lastSearch();
  //firstAndLastSearch();
  //firstAndLastOptimalSearch();
}
