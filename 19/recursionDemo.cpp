#include <iostream>
#include <iomanip>
using namespace std;

static void func() {
  //сравнить:
  //double arr[10000]{};
  
  static int callCount = 1;
  cout << "callCount = " << callCount << "\n";
  callCount++;
  func();
}

int64_t factorial(int64_t n) {
  if (n == 1)
    return 1;
  return n * factorial(n - 1);
}

void factorialDemo() {
  for (int64_t i = 1; i <= 25; i++) {
    cout << "factorial(" <<  setw(2) << i << ") = " << setw(20) << factorial(i) << "\n";
  }
}



int64_t fibRecursive(int64_t n) {
  if (n <= 1)
    return n;
  return fibRecursive(n-1) + fibRecursive(n-2);
}

void fibonacchiRecursiveDemo() {
  for (int64_t i = 1; i <= 40; i++) {
    cout << "fib(" <<  setw(2) << i << ") = " << setw(10) << fibRecursive(i) << "\n";
  }
}



int64_t fibQuick(int64_t n) {
  int64_t a = 0, b = 1, c = 1;
  for (int64_t i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}

void fibonacchiQuickDemo() {
  for (int64_t i = 1; i <= 40; i++) {
    cout << "fib(" <<  setw(2) << i << ") = " << setw(10) << fibQuick(i) << "\n";
  }
}



void recursionDemo() {
  //func();
  //factorialDemo();
  //fibonacchiRecursiveDemo();
  fibonacchiQuickDemo();
}