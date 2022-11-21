#include <iostream>
#include <iomanip>
using namespace std;

//limit - 0x7fffffff (2GB)
//char g_string[100'000'000]{};
  // ����������� � ������� ����������� ������!
char g_string[100]{};


void introDemo() {
  //const int nSize = 40;
  const int nSize = 1'000;

  const char *hello = "Hello, Pooh!";
  char helloArr[nSize] = "Hello, Bear!";

  cout << hello << "\n";
  cout << helloArr << "\n";
  cout << "������ � ����������� ������:\n";
  cout << "&g_string = " << &g_string << "\n";
  cout << "�� �����:\n";
  cout << "&hello    = " << &hello << "\n";
  cout << "&helloArr = " << &helloArr << "\n\n";

  cout << "g_string ��������� � ������� ����� ����������� ������:\n";
  cout << "(void *)g_string   = " << hex << (void *)g_string << "\n";
  cout << "hello ��������� � ������� ����� ����������� ������:\n";
  cout << "(void *)hello      = " << hex << (void *)hello << "\n";
  cout << "helloArr ��������� �� ����� � �����:\n";
  cout << "(void *)&helloArr  = " << hex << (void *)&helloArr << "\n";

  return;

  for (size_t i = 0; i < nSize; i++) {
    cout << setw(4) << hello[i];
  }
  cout << "\n";
  for (size_t i = 0; i < nSize; i++) {
    cout << setw(4) << (int)hello[i];
  }
  cout << "\n\n";

  for (size_t i = 0; i < nSize; i++) {
    cout << setw(4) << helloArr[i];
  }
  cout << "\n";
  for (size_t i = 0; i < nSize; i++) {
    cout << setw(4) << (int)helloArr[i];
  }
}