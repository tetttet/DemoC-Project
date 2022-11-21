#pragma once
#include <iostream>
using namespace std;

void findPosition() {
  double x1, x2;
  double a = 50;
  x1 = -111;
  x2 = -21;
  a = -22;

  //cout << "Enter a: " << endl;
  //cin >> a;
  
  //cout << "Enter b: " << endl;
  //cin >> b;

  cout << "x1 =  " << x1 << endl; 
  cout << "x2 =  " << x2 << endl;
  cout << "a =  " << a << endl;

  //x1 <= a <= x2
  //x2 <= a <= x1

  if ((x1 <= a && a <= x2) || (x2 <= a && a <= x1)) {
    cout << "inside"  << endl;
  } else {
    cout << "outside" << endl;
  }

}


void Coordinates() {
  findPosition();

}

