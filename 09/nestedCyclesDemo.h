#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

void nestedCyclesDemo() {
  int nRows = 20;
  for (size_t i = 0; i <= nRows; i++) {
    for (size_t j = 0; j <= i; j++) {
      cout << setw(4) << i + j;
    }
    cout << "\n";
  }
  cout << "\n";

  for (size_t i = 0; i <= nRows; i++) {
    for (size_t j = 0; j < nRows - i; j++) {
      cout << setw(4) << " ";
    }
    for (size_t j = 0; j <= i; j++) {
      cout << setw(4) << i + j;
    }
    cout << "\n";
  }
  cout << "\n";

  for (size_t i = 0; i <= nRows; i++) {
    for (size_t j = 0; j < (nRows - i) / 2; j++) {
      cout << setw(4) << " ";
    }
    for (size_t j = 0; j <= i; j++) {
      cout << setw(4) << i + j;
    }
    for (size_t j = 0; j < (nRows - i) / 2; j++) {
      cout << setw(4) << " ";
    }
    cout << "\n";
  }
  cout << "\n";


}
