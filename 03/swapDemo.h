#pragma once
#include <iostream>
using namespace std;


void swapDemo() {
  int a, b;
  a = 10; 
  b = 20;
  cout << "a = " << a << ", b = " << b << "\n";

  //Обмен значений
  int temp = a;
  a = b;
  b = temp;

  cout << "После обмена:\n";
  cout << "a = " << a << ", b = " << b << "\n";
}