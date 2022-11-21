#include <iostream>
#include <iomanip>
using namespace std;

#define print(a) cout  << "&" << left << setw(10) << #a << " = " << &a << ", " << setw(10) << #a << " = " << right << setw(5) << a << "\n";

double xGlobal = 1'000'000;

void funcC(int cParam_int, double cParam_dbl) {
  int cLoc_int = 3;
  int cLoc_dbl = 30;
  print(cParam_int);
  print(cParam_dbl);
  print(cLoc_int);
  print(cLoc_dbl);

}


void funcB(int bParam_int, double bParam_dbl) {
  int bLoc_int = 2;
  int bLoc_dbl = 20;
  print(bParam_int);
  print(bParam_dbl);
  print(bLoc_int);
  print(bLoc_dbl);

  funcC(bLoc_int, bLoc_dbl);
}


void funcA(int aParam_int, double aParam_dbl) {
  int aLoc_int = 1;
  int aLoc_dbl = 10;
  print(aParam_int);
  print(aParam_dbl);
  print(aLoc_int);
  print(aLoc_dbl);
  
  funcB(aLoc_int, aLoc_dbl);
}


void stackDemo() {
  static double xStatic = 1000;
  int nLoc = 0;
  double xLoc = 0.0;

  //cout << "&x = " << &x << ", x = " << x << "\n";
  print(xGlobal);
  print(xStatic);
  print(nLoc);
  print(xLoc);
  funcA(nLoc, xLoc);

}