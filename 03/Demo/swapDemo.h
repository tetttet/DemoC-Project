#pragma once
#include <iostream>
using namespace std;


void swapDemo() {
  int a, b;
  a = 10; 
  b = 20;
  cout << "a = " << a << ", b = " << b << "\n";

  //����� ��������
  int temp = a;
  a = b;
  b = temp;

  cout << "����� ������:\n";
  cout << "a = " << a << ", b = " << b << "\n";
}