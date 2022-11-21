#include <iostream>
using namespace std;

void funcWithStaticLocal() {
  static int callCount = 1;
  int i = 1;
  cout << "callCount = " << callCount << ", i = " << i << "\n";
  callCount++;
  i++;
}



void staticLocalDemo() {
  funcWithStaticLocal();
  funcWithStaticLocal();
  funcWithStaticLocal();
  funcWithStaticLocal();
}
