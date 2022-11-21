#pragma once
#include <iostream>
using namespace std;


void boolTypeDemo() {
  bool b1, b2, b3;
  int x = 10;
  b1 = x == 50;
  b2 = true;
  b3 = false;

  cout << "b1 = " << b1 << "\n";
  cout << "true = " << b2 << "\n";
  cout << "false = " << b3 << "\n";
}



void boolOperationsDemo() {
  cout << "true  && true  = " << (true && true) << "\n";
  cout << "true  && false = " << (true && false) << "\n";
  cout << "false && true  = " << (false && true) << "\n";
  cout << "false && false = " << (false && false) << "\n\n";

  cout << "true  || true  = " << (true || true) << "\n";
  cout << "true  || false = " << (true || false) << "\n";
  cout << "false || true  = " << (false || true) << "\n";
  cout << "false || false = " << (false || false) << "\n\n";

  cout << "!true =  " << !true << "\n";
  cout << "!false = " << !false << "\n";
}



void boolDemo() {
  boolTypeDemo();
  boolOperationsDemo();
}