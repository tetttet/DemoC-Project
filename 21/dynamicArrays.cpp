#include <iostream>
#include <iomanip>
#include "utils.h"
using namespace std;

static void introDemo() {
  double *p1 = new double(1);
  cout << "p1 = " << p1 << ", *p1 = " << *p1 << "\n";
  double *p2 = new double{ 2 };
  cout << "p2 = " << p2 << ", *p2 = " << *p2 << "\n";

  delete p1;
  delete p2;

  int nSize = 100'000'000;
  double *arr1 = new double[nSize] {0, 10, 20, 30 };
  for (size_t i = 0; i < 10; i++) {
    cout << setw(4) << arr1[i];
  }
  cout << "\n";


  double *arr2 = new double[nSize]{ };
  for (size_t i = 0; i < nSize; i++) {
    arr2[i] = i * 10;
  }
  for (size_t i = 0; i < 10; i++) {
    cout << setw(4) << arr2[i];
  }

  //show in program manager
  //show in program manager with commented
  delete[] arr1;
  delete[] arr2;
}



void dynamicArraysDemo() {
  introDemo();
}