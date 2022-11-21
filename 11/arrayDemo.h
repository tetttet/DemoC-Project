#pragma once
#include <iostream>
#include "utils.h"
using namespace std;


void arrayIntro() {
  int i = 10;
  //double arrD[i]; //нельзя

  const int n1 = i;
  //double arr[n1];       //нельзя

  const int n = 10;
  double arr[n];
  double arrZero[n]{};

  //cout << "arr: ";
  //for (size_t i = 0; i < n; i++) {
  //  cout << arr[i] << " ";
  //}
  //cout << "\n";

  //cout << "arrZero: ";
  //for (size_t i = 0; i < n; i++) {
  //  cout << arrZero[i] << " ";
  //}
  //cout << "\n\n";

  for (size_t i = 0; i < n; i++) {
    arr[i] = i * i;
  }
  for (size_t i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";


  //int intArr[n]{ 10, 20, 30, 40 };
  //for (size_t i = 0; i < n; i++) {
  //  cout << intArr[i] << " ";
  //}
  //cout << endl;


  //int intArr2[n]{ 10, 20, 30, 40 };
  //intArr2[4] = 50;
  //for (size_t i = 0; i < n; i++) {
  //  cout << intArr2[i] << " ";
  //}
  //cout << "\n";
}



void fillArray() {
  const int n = 100;
  int arr[n];
  int min = -100;
  int max = 200;
  srand(0);
  int range = max - min + 1;
  for (size_t i = 0; i < n; i++) {
    arr[i] = min + rand() % range;
  }
  //for (size_t i = 0; i < n; i++) {
  //  cout << arr[i] << " ";
  //}
  //cout << "\n";
  //or:
  printIntArr(arr, n);
  cout << "\n";
}


void findSum() {
  const int n = 100;
  double arr[n]{ 10, 20, 30, 40 };
  double sum = 0.0;
  for (size_t i = 0; i < n; i++) {
    sum += arr[i];
  }
  cout << "sum = " << sum << "\n";
}


void findMinMax() {
  const int n = 6;
  double arr[n]{ 10, 20, 30, 40, 50, 60 };
  double min = arr[0];
  double max = arr[0];
  int idxMin = 0;
  int idxMax = 0;
  for (size_t i = 1; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
      idxMin = i;
    }
    if (arr[i] > max) {
      max = arr[i];
      idxMax = i;
    }
  }

  for (size_t i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  cout << "min = " << min << " , max = " << max << "\n";
  cout << "idxMin = " << idxMin << " , idxMax = " << idxMax << "\n";
}



void digits() {
  uint64_t num = 1234567890123456789;
  int arr[50]{};

  uint64_t temp = num;
  int i = 0;
  do {
    arr[i] = temp % 10;
    temp /= 10;
    i++;
  } while (temp > 0);
  printIntArr(arr, 22);
  cout << "i =  " << i << "\n\n";

  cout << "Составить число из 2-й цифры по 7-ю включительно:\n";
  int start = 2;
  int end = 7;
  uint64_t n = 0;
  int mult = 1;
  for (size_t i = end - 1; i >= start - 1; i--, mult *= 10) {
    n += arr[i] * mult;
    cout << n << "\n";
  }
  cout << "n =  " << n << "\n\n";
}



void arrayDemo() {
  arrayIntro();
  //fillArray();
  //findSum();
  //findMinMax();
  //digits();
}