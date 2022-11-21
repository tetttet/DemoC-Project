#pragma once
#include <iostream>
using namespace std;

void enumDemo() {
  enum class Season { Winter, Spring, Summer, Autumn };

  cout << "Winter = " << (int)Season::Winter << "\n";
  cout << "Spring = " << (int)Season::Spring << "\n";
  cout << "Summer = " << (int)Season::Summer << "\n";
  cout << "Autumn = " << (int)Season::Autumn << "\n\n";

  Season season = Season::Spring;

  cout << "Season = ";
  if (season == Season::Winter) {
    cout << "Winter\n";
  } else if (season == Season::Spring) {
    cout << "Spring\n";
  } else if (season == Season::Summer) {
    cout << "Summer\n";
  } else if (season == Season::Autumn) {
    cout << "Autumn\n";
  }
}
