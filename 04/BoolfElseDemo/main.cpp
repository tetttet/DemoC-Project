#include <iostream>
using namespace std;

void boolDemo() {
  //bool b1, b2, b3;
  //int x = 10;
  //b1 = x > 50;
  //b2 = true;
  //b3 = false;

  //cout << "b1 = " << b1 << "\n";
  //cout << "true = " << b2 << "\n";
  //cout << "false = " << b3 << "\n";

  cout << "true  && true  = " << (true && true) << "\n";
  cout << "true  && false = " << (true && false) << "\n";
  cout << "false && true  = " << (false && true) << "\n";
  cout << "false && false = " << (false && false) << "\n\n";

  cout << "true  || true  = " << (true || true) << "\n";
  cout << "true  || false = " << (true || false) << "\n";
  cout << "false || true  = " << (false || true) << "\n";
  cout << "false || false = " << (false || false) << "\n\n";

  cout << "!true =  " << !true << "\n";
  cout << "!false = " << !false << "\n";
}


void ifElseDemo() {
  int x = 10;

  if (x % 2 == 0) {
    cout << "x is even\n";
    cout << "Ура!\n";
  } else {
    cout << "x is odd\n";
  }

}







int main() {
  setlocale(LC_ALL, "RUS");


  //boolDemo();
  ifElseDemo();

  cout << "\nEnd . . .\n";
  getchar();
  getchar();
}


