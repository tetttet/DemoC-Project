#pragma once
#include <iostream>
using namespace std;


void breakContinueDemo() {
  const int64_t nMin = 1'000'000'000;
  int64_t i = nMin;
  while (true) {
    if (i % 2 == 0 && i % 5 == 0 && i % 7 == 0) {
      cout << "OK! found: " << i << "\n";
      break;
    }
    i++;
  }
  cout << "while ends!\n";

  i = nMin;
  while (true) {
    i++;
    if (i % 2 != 0) {
      continue;
    }

    // - long work with evens
    //cout << i << "\n";
    //
    //
    //
    if (i % 1234 == 0) {
      cout << i << " break!\n";
      break;
    }
  }

}
