#include <iostream>
#include <iomanip>
using namespace std;

void sayHello(int nTimes);


void sayHello() {
  cout << "Превед, Медвед!\n";
}


int absStep(int x) {
  return (x > 0) ? x : -x;
}

void absStepDemo() {
  cout << "absStep(4) = " << absStep(4) << ", absStep(-2) = " << absStep(-2) << "\n";
}



int compare(double a, double b) {
  if (a < b) return -1;
  if (a > b) return 1;
  if (a == b) return 0;
}


void compareDemo() {
  cout << "compare(1, 2) = " << compare(1, 2) << ", compare(-1, -2) = " << compare(-1, -2) << ", compare(10, 10) = " << compare(10, 5+5) << "\n";
}



int minStep(int a, int b) {
  return (a <= b) ? a : b;
}


void minStepDemo() {
  int x = 2;
  int y = -2;
  int min = minStep(x, y);
  cout << "min = " << min << "\n";
}



bool isPrime(int n) {
  if (n <= 1) {
    cout << "in isPrime(n) n must be greater than 1!\n";
    return false;
  }
  if (n == 2 || n == 3)
    return true;

  int divisor = 2;
  while (divisor * divisor <= n) {
    if (n % divisor == 0)
      return false;
    divisor++;
  }
  return true;
}


void isPrimeDemo() {
  cout << boolalpha;
  for (int i = 0; i <= 20; i++) {
    cout << setw(3) << i << "  " << isPrime(i) << "\n";
  }
}


double someFunc(double a, int n) {
  a *= 2;
  n += 2;
  cout << "inside function params: a = " << a << ", n = " << n << "\n";
  return pow(a, n);
}


void parametersDemo() {
  double x = 10;
  int i = 2;
  cout << "before call function:   x = " << x << ", i = " << i << "\n";
  double result = someFunc(x, i);
  cout << "params(x, i) = " << result << "\n";
  cout << "after call function:    x = " << x << ", i = " << i << "\n";
}



void functionsDemo() {
  //sayHello();
  //sayHello(10);
  //absStepDemo();
  //compareDemo();
  //minStepDemo();
  isPrimeDemo();
  //parametersDemo();
}



void sayHello(int nTimes) {
  for (size_t i = 0; i < nTimes; i++) {
    cout << "Превед, Медвед!\n";
  }
}