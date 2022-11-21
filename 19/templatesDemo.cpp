#include <iostream>
#include <iomanip>
#include "templates.h"
using namespace std;

static void arrayTemplatesDemo() {
  const int nSize = 10;

  int arrInt[nSize]{0, 1, 2, 3, 4, 50, 6, 7, 8, 9};
  printArr<int>(arrInt, nSize);
  printArr(arrInt, nSize); // the same

  //int maxInt = findMax<int>(arrInt, nSize);
  int maxInt = findMax(arrInt, nSize); // the same
  cout << "max = " << maxInt << "\n";

  double arrDouble[nSize]{0, 1, 2, 3, -4, 50.5, 6, 7, 8, 9};
  printArr(arrDouble, nSize);
  double maxDouble = findMax(arrDouble, nSize);
  cout << "max = " << maxDouble << "\n";
}



static void minStepDemo() {
  int minInt = minStep(1, -1);
  cout << "minStep(1, -1) = " << minInt << "\n";

  minInt = minStep<int>(1, -1, -4, 5);
  cout << "minStep(1, -1, -4, 5) = " << minInt << "\n";

  double minDouble = minStep(1.0, -1.5);
  cout << "minStep(1.0, -1.5) = " << minDouble << "\n";

  //double minDouble_ = minStep(1, -1.5);    // нельзя!
  //double minDouble_ = minStep<int>(1, -1.5); // можно, но неправильно!
  //cout << "minStep<int>(1, -1.5) = " << minDouble_ << "\n";
  
  minDouble = minStep<double>(1, -1.5);
  cout << "minStep<double>(1, -1.5) = " << minDouble << "\n";

  minDouble = minStep<double>(1, -1.5, 2.1, -4.5);
  cout << "minStep<double>(1, -1.5, 2.1, -4.5) = " << minDouble << "\n";
}



void templatesDemo() {
  //arrayTemplatesDemo();
  minStepDemo();
}