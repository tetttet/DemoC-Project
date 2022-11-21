#pragma once
#include <iostream>
using namespace std;

void findPointWithinCircle() {
  double x1, y1, r1, x, y;
  x1 = 1; y1 = 2; r1=10; 
  x = 10; y = 15;


  double R = sqrt ((x1 - x) * (x1 - x) + (y1 - y) * y1 - y);
  cout << "R = " << R << endl;
  
  if (R < r1) {
    cout << "Inside" << endl;
  } else {
    cout << "Outside" << endl;
  }
}

void PointInCircle() {
  findPointWithinCircle();
  
}