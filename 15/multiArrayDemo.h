#pragma once
#include <iostream>
#include <iomanip>
#include "utils.h"
using namespace std;

const int nPorch = 4;
const int nFloor = 5;
const int nFlat = 2;
int arr[nPorch][nFloor][nFlat]{};

void fillar(int array[], int length) {
  for (int i = 1; i < length; i++) {
    array[i] = i;
  }
}

//void fill() {
//  int flatNum = 1;
//  for (size_t i = 0; i < nPorch; i++) {
//    for (size_t j = 0; j < nFloor; j++) {
//      for (size_t k = 0; k < nFlat; k++) {
//        arr[i][j][k] = flatNum++;
//      }
//    }
//  }
//}

fillar(arr[nPorch][nFloor], nFlat);

void printPorch() {
  //int porch = 0;
  int porch = 2;
  cout << "porch = " << porch << "\n";
  for (size_t j = 0; j < nFloor; j++) {
    for (size_t k = 0; k < nFlat; k++) {
      cout << setw(4) << arr[porch][j][k];
    }
    cout << "\n";
  }
  cout << "\n";
}


void printFloor() {
  int floor = 0;
  cout << "floor = " << floor << "\n";
  for (size_t i = 0; i < nPorch; i++) {
    for (size_t k = 0; k < nFlat; k++) {
      cout << setw(4) << arr[i][floor][k];
    }
    cout << "\n";
  }
  cout << "\n";
}


//by students
void findPorchAdnFloorByFlatNumber() {
  //code in solutions
}



void multiArrayDemo() {
  fill();
  printPorch();
  printFloor();
  findPorchAdnFloorByFlatNumber();
}