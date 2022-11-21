#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

//static - во избежание конфликта имен функций в проекте!
//функции, помеченные static видны только внутри своего cpp файла. 

static void printIntArr(int arr[], const size_t sz, int width = 6) {
  for (size_t i = 0; i < sz; i++) {
    cout << setw(width) << arr[i];
  }
  cout << '\n';
}

static void printDoubleArr(double arr[], size_t sz, int width = 6) {
  for (size_t i = 0; i < sz; i++) {
    cout << setw(width) << arr[i];
  }
  cout << '\n';
}



static void workWithArray(double arr[], size_t sz) {
  cout << "from workWithArray:\n";
  printDoubleArr(arr, sz);
  arr[0] = 0;
  arr[1] = 0;
  arr[2] = 0;
  cout << "from workWithArray:\n";
  printDoubleArr(arr, sz);
  sz = 111'111'111'111;
  cout << "sz = " << sz << "\n";
}


static void parametersDemo(double arr[], size_t sz) {
  //printIntArr(arr, sz); //can not!

  cout << "from arraysDemo (before):\n";
  printDoubleArr(arr, sz);

  workWithArray(arr, sz);

  cout << "from arraysDemo (after):\n";
  printDoubleArr(arr, sz);
  cout << "sz = " << sz << "\n";
}



static void sortingDemo(double arr[], size_t sz) {
  printDoubleArr(arr, sz);

  //по возрастанию
  sort(arr, arr + sz);
  //sort(arr + sz/2, arr + sz); //сортировка только второй половины массива
  printDoubleArr(arr, sz);

  //по убыванию
  for (size_t i = 0; i < sz / 2; i++) {
    double temp = arr[i];
    arr[i] = arr[sz - 1 - i];
    arr[sz - 1 - i] = temp;
  }
  printDoubleArr(arr, sz);
}


//Написать функцию
//void concatArrays(double a[], size_t aSize, double b[], size_t bSize, double c[])
//заполняющую массив "c" по порядку элементами из массивов a и b.

void concatArrays(double a[], size_t aSize, double b[], size_t bSize, double c[]) {
  for (size_t i = 0; i < aSize; i++) {
    c[i] = a[i];
  }
  for (size_t i = 0; i < bSize; i++) {
    c[i + aSize] = b[i];
  }
}


void concatArraysDemo() {
  const int aSize = 10;
  double a[aSize]{ 1, 2, 3, 4, 5 };
  const int bSize = 5;
  double b[bSize]{ 10, 20, 30, 40, 50 };

  const int cSize = aSize + bSize;
  double c[cSize]{};
  printDoubleArr(a, aSize);
  printDoubleArr(b, bSize);
  printDoubleArr(c, cSize);

  concatArrays(a, aSize, b, bSize, c);
  printDoubleArr(c, cSize);
}


static void _concatArrays(double a[], size_t aSize, double b[], size_t bSize, double c[]) {
  for (size_t i = 0; i < aSize; i++) {
    c[i] = a[i];
  }
  for (size_t i = 0; i < bSize; i++) {
    c[i + aSize] = b[i];
  }
}


static void _concatArraysDemo() {
  const size_t aSize = 10;
  double a[aSize]{ 1, 2, 3, 4, 5 };
  const size_t bSize = 5;
  double b[bSize]{ 10, 20, 30, 40, 50 };
  double c[aSize + bSize]{};

  printDoubleArr(a, aSize);
  printDoubleArr(b, bSize);
  printDoubleArr(c, aSize + bSize);

  concatArrays(a, aSize, b, bSize, c);
  printDoubleArr(c, aSize + bSize);
}



//не static, так как вызывается из main! 
void arraysDemo() {
  const int nSize = 10;
  double testArr[]{ 9, 2, 3, 6, 5, 4, 1, 7, 8, 0 };

  //parametersDemo(testArr, nSize);
  //sortingDemo(testArr, nSize);
  concatArraysDemo();
}