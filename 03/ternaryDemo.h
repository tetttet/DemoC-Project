#pragma once
#include <iostream>
using namespace std;


void ternaryDemo() {
  int x, y, min, max, abs_;
  x = -10;
  y = 20;

  min = (x > y) ? y : x;
  max = (x > y) ? x : y;
  abs_ = (x - y > 0) ? (x - y) : (y - x);
  cout << "x = " << x << ", y =  " << y << "\n";
  cout << "min = " << min << ", max =  " << max << ", abs = " << abs_ <<"\n";

 // or:
  //abs_ = abs(x - y);

}