#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include "utils.h"
using namespace std;

void stringReadingDemo() {
  const int size = 20;

  char s[size]{};
  cout << "s = " << s << "\n";
  cout << "Enter string:\n";
  cin.getline(s, size);
  cout << "s = " << s << "\n";
  printChars(s, size);
  cout << "\n";
  printBytes(s, size);
  cout << "\n\n";

  cout << "Enter string:\n";
  fgets(s, size, stdin); //stores newline character!
  cout << "s = " << s << "\n";
  printChars(s, size);
  cout << "\n";
  printBytes(s, size);
  cout << "\n\n";



}