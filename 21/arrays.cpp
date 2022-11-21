#include <iostream>
#include <iomanip>
#include "utils.h"
using namespace std;

void printDoubleArr(double *arr, int sz, int width = 6) {
  for (size_t i = 0; i < sz; i++) {
    cout << setw(width) << *(arr + i);
  }
}



template<typename T>
T sumArr(T *arr, int sz){
  T sum = 0;
  for (size_t i = 0; i < sz; i++) {
    sum += *(arr+i);
  }
  return sum;
}



void pointersToArrays() {
  const int nSize = 10;
  double arr[nSize]{};
  for (size_t i = 0; i < nSize; i++) {
    arr[i] = i * 10;
  }
  printArr(arr, nSize);

  double *p = arr;
  double *p2 = (double *)&arr;
  cout << "arr  = " << arr << "\n";
  cout << "&arr = " << &arr << "\n";
  cout << "p    = " << p << "\n";
  cout << "p2   = " << p2 << "\n\n";

  cout << "*p     = " << *p << "\n";
  cout << "*(p+1) = " << *(p + 1) << "\n";
  cout << "*(p+2) = " << *(p + 2) << "\n\n";

  //то есть,
  // *(arr+i) == arr[i]
  // *(p+i) == p[i]
  cout << "*(arr + 3) = " << *(arr + 3) << "\n";
  cout << "arr[3]     = " << arr[3] << "\n";
  cout << "*(p + 3)   = " << *(p + 3) << "\n";
  cout << "p[3]       = " << p[3] << "\n\n";

  printDoubleArr(arr, nSize);
  cout << "\n";
  cout << "sumArr<double>(arr, nSize) = " << sumArr<double>(arr, nSize) << "\n";
}



void arrayDemo() {
  pointersToArrays();

}