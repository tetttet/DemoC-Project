#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

void myOwnSnippet() {


  int64_t n = 12223456789;

  if (n < 0) {
    cout << "Wrong number!" << endl;
    return;
  }

  int64_t temp = n;
  cout << "n = " << n << endl;

  int twoCount = 0;
  while (temp > 0) {
    int d = temp % 10;
    //cout << d << " " << "(temp = " << temp << "), ";
    cout << d << " ";
    if (d==2) {
      twoCount++;
    }
    temp /= 10;

  //while (true) {
  //  int d = temp % 10;
  //  cout << d << " ";
  //  if (temp < 10)
  //    break;
  //  temp /= 10;

  }
  cout << "two Count = " << twoCount << endl;

}