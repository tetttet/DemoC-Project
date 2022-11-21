#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;


void randomDemo() {
  int nMax = 10;

  cout << "Одинаковые последовательности:\n";
  srand(0);
  for (size_t i = 0; i < nMax; i++) {
    cout << rand() << " ";
  }
  cout << "\n";

  srand(0);
  for (size_t i = 0; i < nMax; i++) {
    cout << rand() << " ";
  }
  cout << "\n\n";

  while (true) {
    cout << "Разные последовательности, если запускать не слишком быстро :=)\n";
    srand(time(0));
    for (size_t i = 0; i < nMax; i++) {
      cout << rand() << " ";
    }
    cout << "\nПодождите немного и нажмите клавишу 'Enter' ('q' и 'Enter' - для выхода)\n";
    char ch = getchar();
    if (ch == 'q' || ch == 'Q')
      break;
  }
}