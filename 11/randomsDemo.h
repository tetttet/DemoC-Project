#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/* √енераци€ случайных целых чисел в массиве */
void arRandInt(int array[], int length, int min, int max, int width) {
  srand(0);
  int range = max - min + 1;
  for (int i = 0; i < length; i++) {
    array = min + rand() % range;
  }
}

/* √енераци€ случайных вещественных чисел в массиве */
void arRanDouble(double array[], int length, double min, double max, int width) {
  for (int i = 0; i < length; i++) {
    double range = max - min;
    array = min + (double)rand() / RAND_MAX * range;
  }
}

/* √енераци€ случайных целых чисел в матрице */
void mtxRandPrInt(int* matrix, int rows, int columns, int width) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << setw(width) << *(matrix + i * columns + j);
    }
    cout << endl;
  }
}

/* –аспечатка матрицы в вещественных значени€х */
void mtxRandDouble(double* matrix, int rows_length, int columns_length, int width) {
  for (int i = 0; i < rows_length; i++) {
    for (int j = 0; j < columns_length; j++) {
      cout << setw(width) << *(matrix + i * columns_length + j);
    }
    cout << endl;
  }
}




void doubleFromMinToMaxDemo() {
}


void randomDemo() {
  randomIntro();
  //intFromMinToMaxDemo();
  //doubleFromMinToMaxDemo();
}