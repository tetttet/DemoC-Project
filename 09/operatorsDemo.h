#pragma once
#include <iostream>
using namespace std;


void incDecDemo() {
  int i, j =0 ;

  i = 0;
  j = i++;
  cout  <<"i = " << i <<", j = " << j << "\n";


  i = 0;
  j = ++i;
  cout  <<"i = " << i <<", j = " << j << "\n";
  return;

  i = 0;
  j = i--;
  cout  <<"i = " << i <<", j = " << j << "\n";

  i = 0;
  j = --i;
  cout  <<"i = " << i <<", j = " << j << "\n";
}



void compoundOperatorsDemo() {
  double a, b;

  a = 0;
  b = 10;
  a += b;
  //or
  //a = a + b;
  cout  <<"a = " << a <<", b = " << b << "\n";


  a = 0;
  b = 10;
  a -= b;
  //or
  //a = a - b;
  cout  <<"a = " << a <<", b = " << b << "\n";

  a = 2;
  b = 10;
  a *= b;
  //or
  //a = a * b;
  cout  <<"a = " << a <<", b = " << b << "\n";

  a = 2;
  b = 10;
  a /= b;
  //or
  //a = a / b;
  cout  <<"a = " << a <<", b = " << b << "\n";
}



void operatorsDemo() {
  //incDecDemo();
  compoundOperatorsDemo();

}