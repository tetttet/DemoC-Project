#include <iostream>
using namespace std;

void typesDemo() {
  int i;
  unsigned int ui;
  long l;
  unsigned long ul;
  double d;
  char ch;

  cout << "sizeof(int)                = " << sizeof(int) << "\n";
  cout << "sizeof(unsigned int)       = " << sizeof(unsigned int) << "\n";

  cout << "sizeof(long)               = " << sizeof(long) << "\n";
  cout << "sizeof(unsigned long)      = " << sizeof(unsigned long) << "\n";

  cout << "sizeof(long long)          = " << sizeof(long long) << "\n";

  cout << "sizeof(double)             = " << sizeof(double) << "\n";
  
  cout << "sizeof(ch)                 = " << sizeof(ch) << "\n\n";


  cout << "int (min, max)            = " << INT_MIN << ", " << INT_MAX << "\n";
  cout << "unsigned int (min, max)   = " << 0 << ", " << UINT_MAX << "\n";

  cout << "long long  (min, max)     = " << LLONG_MIN << ", " << LLONG_MAX << "\n";
 
  cout << "double (min, max)         = " << DBL_MIN << ", " << DBL_MAX << "\n";

  cout << "char (min, max)           = " << CHAR_MIN << ", " << CHAR_MAX << "\n";
}



void charsDemo() {
  char ch = 'A';
  int nCh = int(ch);
  cout << "ch = " << ch << "\n";
  cout << "nCh = " << nCh << "\n";

  int i = 100;
  char chI = (char)i;
  cout << "i = " << i << "\n";
  cout << "chI = " << chI << "\n\n";

  cout << "Enter char:\n";
  cin >> ch;
  cout << "ch = " << ch << "\n";
}



int main() {
  setlocale(LC_ALL, "RUS");

  //typesDemo();
  charsDemo();

  cout << "\nEnd . . .\n";
  getchar();
  getchar();
}


