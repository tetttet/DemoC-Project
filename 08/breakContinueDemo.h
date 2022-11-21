#pragma once
#include <iostream>
using namespace std;


void varBC1() {
  const int64_t nMin = 1'000'000'000;
  int64_t i = nMin;
  while (true) {
    if (i % 2 == 0 && i % 5 == 0 && i % 7 == 0) {
      cout << "OK! Found: " << i << endl;
      break;
    }
    i++;
  }
  cout << "while ends!" << endl;
}

void varBC2() {
  const int nMin = 1'000'000'000;
  int i = nMin;
  while (true) {
    if (i % 2 == 0 && i % 5 == 0 && i % 7 == 0) {
      cout << "OK! Found: " << i << endl;
      break;
    }
    i++;
  }
  cout << "while ends!" << endl;

  i = nMin;
  while (true) {
    i++;
    if (i % 2 != 00) {
      continue;
    }
    //cout << i << endl;
    // - long works with evens
    //
    //
    //
    if (i % 12345678900 == 0) {
      cout << i << " Break" << endl;
      break;
    }
  }
}




void breakContinueDemo() {
  //varBC1();
  varBC2();
  //varBC3();


}