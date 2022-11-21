#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void randomIntro() {
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

void intFromMinToMaxDemo() {
  //включает min и max
  int min = 10;
  int max = 20;
  srand(0);
  int range = max - min + 1;
  for (size_t i = 0; i < 1000; i++) {
    int r = min + rand() % range;
    cout << r << " ";
  }
}


void doubleFromMinToMaxDemo() {
  double min = 10;
  double max = 20;
  cout << "RAND_MAX = " << RAND_MAX << "\n";
  for (size_t i = 0; i < 100; i++) {
    double range = max - min;
    double r =  min + (double) rand() / RAND_MAX  * range;
    cout << r << "\n";
  }
}


void randomDemo() {
  //randomIntro();
  //intFromMinToMaxDemo();
  doubleFromMinToMaxDemo();
}