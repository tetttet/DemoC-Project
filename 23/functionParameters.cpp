#include <iostream>
#include <iomanip>
#include "utils.h"
using namespace std;


template<typename T>
void swapStepBad(T a, T b) {
  T temp = a;
  a = b;
  b = temp;
  cout << "inside swapStepBad: a = " << a << ", b = " << b << "\n";
}


template<typename T>
void swapStep(T *a, T *b) {
  T temp = *a;
  *a = *b;
  *b = temp;
}



static void swapDemo() {
  double a = 10;
  double b = 20;

  cout << "bad swap:\n";
  a = 10; b = 20;
  print(a, b);
  swapStepBad(a, b);
  print(a, b);

  cout << "\nswap with pointers:\n";
  a = 10; b = 20;
  print(a, b);
  swapStep(&a, &b);
  print(a, b);
}


template<typename T>
void minAndMax(T a, T b, T *min, T *max) {
  if (a > b) {
    *min = b;
    *max = a;
  } else {
    *min = a;
    *max = b;
  }
}


static void minAndMaxDemo() {
  double a = 10;
  double b = -20;
  double minimum, maximum;
  print(a, b);
  minAndMax(a, b, &minimum, &maximum);
  cout << "minimum = " << minimum << ", maximum = " << maximum << "\n";
}



void functionParametersDemo() {
  //swapDemo();
  minAndMaxDemo();
}