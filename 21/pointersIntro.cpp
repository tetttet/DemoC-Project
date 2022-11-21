#include <iostream>
using namespace std;

void pointersIntroDemo() {
  double x = 10;

  double *px = &x;
  //cout << "x = " << x << ", &x = " << &x << "\n";
  //cout << "px = " << px << ", &px = " << &px << "\n";

  cout << "&x = " << &x << "\n";
  cout << "px  = " << px << "\n";
  cout << "&px = " << &px << "\n";

  double y = *px;
  cout << "x = " << x << ", y = " << y << "\n";
  *px = 20;
  cout << "x = " << x << ", y = " << y << "\n";

  double *py = &y;
  *py = 30;
  cout << "x = " << x << ", y = " << y << "\n\n";

  double *pNull = nullptr;
  cout << "pNull  = " << pNull << "\n";
  cout << "&pNull = " << &pNull << "\n";
  //cout << "*pNull = " << *pNull << "\n"; //error
  pNull = px;
  cout << "*pNull = " << *pNull << "\n\n";

  void *pVoid = nullptr;
  pVoid = px;
  py = (double *)pVoid;

  double *pz = (double *)pVoid;
  cout << "*pz = " << *pz << "\n";
  //or:
  double z = *(double *)pVoid;
  cout << "z   = " << z << "\n\n";
}