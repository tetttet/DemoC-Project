#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
#include "utils.h"
using namespace std;


void memcpyDemo() {
  //If the objects overlap, the behavior is undefined.
  const int size = 20;
  char s1[] = "Hello Bear!";
  char s2[size];
  printBytes(s1, size);
  cout << "\n";
  printBytes(s2, size);
  cout << "\n\n";

  memcpy(s2, s1, 5);
  s2[5] = 0;
  
  cout << "\n\ns1 = " << s1 << "\n";
  printChars(s1, size);
  cout << "\n";
  printBytes(s1, size);
  cout << "\n\ns2 = " << s2 << "\n";
  printChars(s2, size);
  cout << "\n";
  printBytes(s2, size);
  cout << "\n\n";

  double *arr1 = createRandomArray<double>(size);
  double *arr2 = new double[size]{};
  printArray(arr1, size);
  printArray(arr2, size);
  memcpy(arr2, arr1, size * sizeof(double));
  //memcpy(arr2, arr1, size * sizeof(double) - 8);
  printArray(arr2, size);

  delete[] arr1;
  delete[] arr2;
}



void memmoveDemo() {
  //The objects may overlap: copying takes place as if the characters were copied to a temporary character array
  //and then the characters were copied from the array to dest.
  char x[] = "Home Sweet Home"; 
  cout << "Before:\n";
  cout << x << "\n";

  char *dest = (char *)memmove(x, &x[5], 10);

  cout << "After:\n";
  cout << x << "\n";
  cout << dest << "\n";
}



void memcmpDemo() {
  const int size = 1'000'000;
  double *arr1 = new double[size] {};
  double *arr2 = new double[size] {};
  for (size_t i = 0; i < size; i++) {
    arr1[i] = i + i;
    arr2[i] = 2 * i;
  }
  int cmp = memcmp(arr1, arr2, size * sizeof(double));
  cout << "memcpm arr1 with arr2  = " << cmp  << "\n";
  delete[] arr1;
  delete[] arr2;
}



void memsetDemo() {
  char s[15] = "BBBBBBBBBBBBBB";
  cout << s << "\n";
  (char *)memset(s, 'b', 7);
  cout << s << "\n";
}



void memoryFunctionsDemo() {
  //memcpyDemo();
  //memmoveDemo();
  //memcmpDemo();
  memsetDemo();

}