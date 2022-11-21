#pragma once
#include <iostream>
using namespace std;


void if_() {
  int x = 11;

  if (x % 2 == 0) {
    cout << "x is even\n";
    cout << "Óðà!\n";
  }

  if (x % 2 != 0) {
    cout << "x is odd\n";
  }
  cout << "x = " << x << "\n";
}



void ifAndElse() {
  int x = 1000;

  if (x % 2 == 0) {
    cout << "x is even\n";
    cout << "Óðà!\n";
  } else {
    cout << "x is odd or . . . .\n";
  }
}



void inner() {
  int x = 1000;

  if (x % 2 == 0) {
    cout << "x is even\n";
    cout << "Óðà!\n";
    if (x > 100) {
      cout << "  and greater than 100\n";
    } else {
      cout << "  and less than 100\n";
    }
  } else {
    cout << "x is odd or . . . .\n";
  }
}



void isPosNegZero() {
  int x = 0;

  if (x > 0) {
    cout << "positive\n";
  } else {
    if (x < 0) {
      cout << "negative\n";
    } else {
      cout << "zero\n";
    }
  }
}



void manyIfElse() {
  int num = 4;
  cout << "num = " << num << "\n";
  if (num == 1) {
    cout << "one";
  } else
    if (num == 2) {
      cout << "two";
    } else if (num == 3) {
      cout << "three";
    } else if (num == 4) {
      cout << "four";
    } else if (num == 5) {
      cout << "five";
    } else if (num > 5) {
      cout << "greate than five";
    } else {
      cout << "unknown!";
    }
}



void ifElseDemo() {
  //if_();
  //ifAndElse();
  //inner();
  //isPosNegZero();
  manyIfElse();

}