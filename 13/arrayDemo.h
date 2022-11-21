#pragma once
#include <iostream>
#include "utils.h"
using namespace std;


void arrayIntro() {
  int i = 10;
  //double arrD[i];  //нельзя!

  const int n1 = i;
  //double arrI[n1]; //нельзя!

  const int n = 10;
  double arr[n];
  double arrZero[n]{};

  cout << "arr: ";
  for (size_t i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  cout << "arrZero: ";
  for (size_t i = 0; i < n; i++) {
    cout << arrZero[i] << " ";
  }
  cout << "\n\n";

  for (size_t i = 0; i < n; i++) {
    arr[i] = i * i;
  }
  for (size_t i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  int intArr[n]{10, 20, 30, 40};
  for (size_t i = 0; i < n; i++) {
    cout << intArr[i] << " ";
  }
  cout << "\n";
}



void fillArray() {
  const int n = 1000;
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
  const int nSize = 100;
  double arr[nSize]{10, 20, 30, 40};
  double sum = 0.0;
  for (size_t i = 0; i < nSize; i++) {
    sum += arr[i];
  }
  cout << "sum = " << sum << "\n";
}


void findMinMax() {
  const int nSize = 6;
  double arr[nSize]{10, 20, 30, 40, -50, 60};
  double min = arr[0];
  double max = arr[0];
  int idxMin = 0;
  int idxMax = 0;
  for (size_t i = 1; i < nSize; i++) {
    if (arr[i] <= min) {
      min = arr[i];
      idxMin = i;
    }
    if (arr[i] > max) {
      max = arr[i];
      idxMax = i;
    }
  }

  for (size_t i = 0; i < nSize; i++) {
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
  int nDigits = i;
  cout << "num = " << num << "\n";
  printIntArr(arr, 22);
  cout << "nDigits =  " << nDigits << "\n\n";

  cout << "Составить число из 2-й цифры по 7-ю включительно:\n";
  cout << "num = " << num << "\n";
  int start = 2;
  int end = 7;
  int64_t n = 0;
  int64_t mult = 1;

  int idxMin = nDigits - end;
  int idxMax = nDigits - start;
  cout << "idxMin = " << idxMin << ", idxMax = " << idxMax << "\n";

  for (int i = idxMin; i <= idxMax; i++, mult *= 10) {
    n += arr[i] * mult;
    cout << n << "\n";
  }
  cout << "n = " << n << "\n\n";
}


void swapElems() {
  const int nSize = 5;
  int arr[nSize]{ 0, 1, 2, 3, 4 };
  printIntArr(arr, nSize);

  cout << "Обмен элементов с индексами 0 и 1\n";
  int temp = arr[0];
  arr[0] = arr[1];
  arr[1] = temp;
  printIntArr(arr, nSize);

  cout << "Обмен элементов с индексам 0 и последнего\n";
  temp = arr[0];
  arr[0] = arr[nSize - 1];
  arr[nSize - 1] = temp;
  printIntArr(arr, nSize);
}

void arrayDemo() {
  //arrayIntro();
  //fillArray();
  //findSum();
  //findMinMax();
  //digits();
  swapElems();
}