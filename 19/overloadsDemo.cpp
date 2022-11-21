#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

//static - во избежание конфликта имен функций в проекте!
//функции, помеченные static видны только внутри своего cpp файла. 

static void print(int arr[], size_t sz, int width = 6) {
  for (size_t i = 0; i < sz; i++) {
    cout << setw(width) << arr[i];
  }
  cout << '\n';
}


static void print(double arr[], size_t sz, int width = 6) {
  for (size_t i = 0; i < sz; i++) {
    cout << setw(width) << arr[i];
  }
  cout << '\n';
}



//не static, так как вызывается из main! 
void overloadsDemo() {
  const int nSize = 10;
  double doubleArr[]{9.1, 2.1, 3.1, 6.1, 5.1, 4.1, 1.1, 7.1, 8.1, 0.1};
  int intArr[]{9, 2, 3, 6, 5, 4, 1, 7, 8, 0};

  print(doubleArr, nSize);
  print(intArr, nSize);
}
