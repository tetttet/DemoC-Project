#pragma once
#include <iostream>
#include <iomanip>
using namespace std;


void iomanipDemo() {
  int nMax = 20;
  double step = 0.2;
  double x = 0;
  double y1, y2;

  cout << "----------------------------------\n"
          "|    x   |    1/x     |   sin(x) |\n"
          "----------------------------------\n";
  for (size_t i = 0; i < nMax; i++) {
    x += step;
    y1 = 1.0 / x;
    y2 = sin(x);
    //cout << "| " << x << " | " << y1 << " | " << y2 << " |" << "\n";

    cout << fixed;

    cout << "| ";
    cout << setprecision(2);
    cout <<  setw(6) << x << " |";
    cout << setprecision(4);
    cout <<  setw(10) << y1 << " |";
    cout << setprecision(4);
    cout <<  setw(10) << y2 << " |" << "\n";
  }

}