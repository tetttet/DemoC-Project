#pragma once
#include <iostream>
using namespace std;

void seasonWithSwitch() {
  int month = 3;
  cout << "month = " << month << "\n";
  switch (month) {
  case(1):
  case(2):
  case(12):
    cout << "winter";
    break;
  case(3):
  case(4):
  case(5):
    cout << "spring";
    break;
  case(6):
  case(7):
  case(8):
    cout << "summer";
    break;
  case(9):
  case(10):
  case(11):
    cout << "autumn";
    break;
  default:
    cout << "incorrect input!";
    break;
  }
  cout << "\n";
}



void seasonWithIf() {
  int month = 6;
  cout << "month = " << month << "\n";
  if (month == 12 || month == 1 || month == 2) {
    cout << "winter";
  } else if (month == 3 || month == 4 || month == 5) {
    cout << "spring";
  } else if (month == 6 || month == 7 || month == 8) {
    cout << "summer";
  } else if (month == 9 || month == 10 || month == 11) {
    cout << "autumn";
  } else {
    cout << "incorrect input!";
  }
  cout << "\n";
}



void switchDemo() {
  seasonWithSwitch();
  seasonWithIf();
}