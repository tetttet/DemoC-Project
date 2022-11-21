#pragma once
#include <iostream>
using namespace std;

void threeValueDigit() {

  int64_t n = 0;

  for (int64_t i = 100; i <= 999; i++) {
    n = i;
    int64_t temp = n;
    cout << n << endl;



    while (temp > 0) {
      int d = temp % 10;

      cout << "\t" << d << endl;




    }

  }
}






  //int64_t temp = n;
  //cout << "n = " << n << endl;

  //int twoCount = 0;
  //}



  //int64_t n = 999;

  //if (n < 0) {
  //  cout << "Wrong number!" << endl;
  //  return;
  //}

  //int64_t temp = n;
  //cout << "n = " << n << endl;

  //int twoCount = 0;
  //while (temp > 0) {
  //  int d = temp % 10;
  //  cout << d << " ";
  //  if (d == 2) {
  //    twoCount++;
  //  }
  //  temp /= 10;
  //}