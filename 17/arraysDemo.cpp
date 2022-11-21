#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

//static - во избежание конфликта имен функций в проекте!
//функции, помеченные static видны только внутри своего cpp файла. 

static void printIntArr(int arr[], size_t sz, int width = 6) {
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
}


static void parametersDemo(double arr[], size_t sz) {
  //printIntArr(arr, sz); //can not!

  cout << "from arraysDemo (before):\n";
  printDoubleArr(arr, sz);

  workWithArray(arr, sz);

  cout << "from arraysDemo (after):\n";
  printDoubleArr(arr, sz);
}



static void sortingDemo(double arr[], size_t sz) {
  printDoubleArr(arr, sz);
  
  //по возрастанию
  sort(arr, arr + sz);
  printDoubleArr(arr, sz);

  //по убыванию
  for (size_t i = 0; i < sz/2; i++) {
    double temp = arr[i];
    arr[i] = arr[sz - 1 - i];
    arr[sz - 1 - i] = temp;
  }
  printDoubleArr(arr, sz);
}



//не static, так как вызывается из main! 
void arraysDemo() {
  const int nSize = 10;
  double testArr[]{9, 2, 3, 6, 5, 4, 1, 7, 8, 0};
  
  //parametersDemo(testArr, nSize);
  sortingDemo(testArr, nSize);

}