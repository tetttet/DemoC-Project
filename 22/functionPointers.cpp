#include <iostream>
#include <iomanip>
#include "utils.h"
using namespace std;

using dToD_t = double (*) (double);
//or:
typedef double (*dToD_t2)(double);


double sqrtStep(double x) {
  return x * x;
}


double complexFunc1(double x) {
  if (x < 0)
    return 0;
  else {
    return x * sin(x);
  }
}


double complexFunc2(double x) {
  if (x < 0)
    return -2 * x;
  else {
    return 4 * x;
  }
}


void printTable(double min, double max, double step, double (*func) (double)) {
  double x = min;
  cout << fixed;
  cout << setprecision(2);
  while (x <= max) {
    cout << setw(8) << x << " | " << setw(8) << func(x) << "\n";
    x += step;
  }
  cout << "\n";
}



void print3ColumnsTable(double min, double max, double step, dToD_t f1, dToD_t f2, dToD_t f3) {
  double x = min;
  cout << fixed;
  cout << setprecision(2);
  while (x <= max) {
    cout << setw(8) << x << " | " << setw(8) << f1(x) << " | " << setw(8) << f1(x) << " | " << setw(8) << f1(x) << " |\n";
    x += step;
  }
  cout << "\n";
}



static void introDemo() {
  printTable(-5, 5, 0.5, sqrtStep);
  printTable(-5, 5, 0.5, complexFunc1);
  printTable(-5, 5, 0.5, complexFunc2);
  print3ColumnsTable(-5, 5, 0.5, sqrtStep, complexFunc1, complexFunc2);
}



void transformArray(double *arr, int64_t size, dToD_t func) {
  for (size_t i = 0; i < size; i++) {
    arr[i] = func(arr[i]);
  }
}


void transformDemo() {
  int nSize = 100'000'000;
  double *arr = new double[nSize] {};
  for (size_t i = 0; i < nSize; i++) {
    arr[i] = 10 * i;
  }
  printArray(arr, nSize, false, 12);
  transformArray(arr, nSize, sin);
  printArray(arr, nSize, false, 12);
}



double applyFunctions(double x, dToD_t *funcs, int funcsSize) {
  double y = x;
  for (size_t i = 0; i < funcsSize; i++) {
    y = funcs[i](y);
  }
  return y;
}


void arrayPointersToFunctionsDemo() {
  int nFunc = 8;
  dToD_t *funcArr = new dToD_t[nFunc]{ sin, cos, tan, exp, log, atan, acos, asin };

  double x = 0;
  double y;
  double step = 0.01;
  cout << fixed;
  cout << setprecision(18);
  for (size_t i = 0; i < 100; i++) {
    y = applyFunctions(x, funcArr, nFunc);
    cout << x << " | " << y << "\n";
    x += step;
  }
}



void functionPointersDemo() {
  //introDemo();
  //transformDemo();
  arrayPointersToFunctionsDemo();
}