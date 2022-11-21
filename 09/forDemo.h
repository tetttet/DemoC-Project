#pragma once
#include <iostream>
using namespace std;


void forIntro() {
  int nMin = 10;
  int nMax = 20;
  for (int i = nMax; i >= nMin; i--) {
    cout << i << " Preved\n";
    cout << i * 100 << " Medved!\n";
  }
}



void otherDemo() {
  int nMin = -20;
  int nMax = 10;
  for (int i = nMax, cnt = 0; i >= nMin; i -= 3, cnt++) {
    cout << i << " Preved\n";
    if (cnt < 5) {
      cout << cnt << " Medved!\n";
    }
  }
}


  void forDemo() {
    forIntro();
    otherDemo();
  }
