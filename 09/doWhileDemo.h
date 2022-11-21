#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

void doWhileDemo() {

  int nMax = 10;
  int i = 0;
  do {
    cout << i << "Hello world" << endl;
    i++;

  } while (i <= nMax);

}