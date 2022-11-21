#pragma once
#include <iostream>
#include "utils.h"
using namespace std;


//Перенести все положительные элементы из массива arrFrom в arrTo.
void transferDemo() {
  const int nSizeFrom = 10;
  const int nSizeTo = 20;
  int arrFrom[nSizeFrom]{0, 10, 20, -30, 40, -50, -60, 70, -80, 90};
  int arrTo[nSizeTo]{};

  printIntArr(arrFrom, nSizeFrom);
  cout << "\n";

  int currentIdx = 0;
  for (int i = 0; i < nSizeFrom; i++) {
    if (arrFrom[i] > 0) {
      arrTo[currentIdx] = arrFrom[i];
      currentIdx++;
      
      //or:
      //arrTo[currentIdx++] = arrFrom[i];

      printIntArr(arrTo, nSizeTo);
    }
  }

  printIntArr(arrTo, nSizeTo);
}