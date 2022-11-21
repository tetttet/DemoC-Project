#pragma once
#include <iostream>
using namespace std;

void simpleDemo() {
  int count = 1;
  int nMax = 10;

  while (count <=nMax) {
    cout << "Hello" << endl;
    count++;
    cout << count << ". Hello" << endl;
  }
}

void simpleDemoPlus() {
  int nMin = 10;
  int nMax = 15;
  int count = nMin;

  while (count <= nMax) {
    cout << count << ". Hello" << endl;
    count++;
  }
}

void simpleDemoMinus() {
  int nMin = 10;
  int nMax = 15;
  int count = nMax;

  while (count >= nMin) {
    cout << count << ". Hello" << endl;
    count--;
  }
}

void sumDemo() {
  int nMin = 10;
  int nMax = 15;
  int sum = 0;
  int cnt = nMin;

  while (cnt <= nMax) {
    sum=sum+cnt;
    cout << "cnt = " << cnt << ", sum = " << sum << endl;
    cnt++;
  }
  cout << "sum = " << sum << endl;
}

void multDemo1() {
  int nMin = 10;
  int nMax = 15;
  int mult = 1;
  int cnt = nMin;

  while (cnt <= nMax) {
    mult = mult * cnt;
    cout << "cnt = " << cnt << ", mult = " << mult << endl;
    cnt++;
  }
  cout << "mult = " << mult << endl;
}

void multDemo2() {
  int nMin = 10;
  int nMax = 15;
  int mult = nMin;
  int cnt = nMin + 1;

  while (cnt <= nMax) {
    mult = mult * cnt;
    cout << "cnt = " << cnt << ", mult = " << mult << endl;
    cnt++;
  }
  cout << "mult = " << mult << endl;
}


/*Распечатать все цифры введенного целого числа в обратном порядке*/
void printAllDigits() {
  uint64_t number = 1234;
  cout << "number =" << number << endl;
  uint64_t currNum = number;

  while (currNum > 0) {
    int d = currNum % 10;
    cout << "d = " << d << endl;
    currNum /= 10;
  }
}


void whileDemo() {
  //simpleDemo();
  //simpleDemoPlus();
  //simpleDemoMinus();
  //sumDemo();
  //multDemo1();
  //multDemo2();
  printAllDigits();
}

