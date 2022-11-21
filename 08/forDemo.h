#pragma once
#include <iostream>
using namespace std;


void varFor1() {
  int nMin = -10; 
  int nMax = 10;

for (int i = nMax, count = 0; i >= nMin && count <5; i--, count++) {
  cout << i << ". Hello!" << endl;
  cout << count << ". Bear!" << endl;

}

}

void varFor2() {
  int nMin = -10;
  int nMax = 10;

  for (int i = nMax, count = 0; i >= nMin; i--, count++) {
    cout << i << ". Hello!" << endl;
    if (count < 5) {
      cout << count << ". Bear!" << endl;
    }
    
  }

}

void varFor3() {
  int nMin = -10;
  int nMax = 10;

  for (int i = nMax, count = 0; i >= nMin; i-=3, count++) {
    cout << i << ". Hello!" << endl;
    if (count < 5) {
      cout << count << ". Bear!" << endl;
    }

  }

}



void forDemo() {
  //varFor1();
  //varFor2();
  varFor3();


}