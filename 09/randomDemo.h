#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;


void randomDemo() {
  int nMax = 10;

  cout << "���������� ������������������:\n";
  srand(0);
  for (size_t i = 0; i < nMax; i++) {
    cout << rand() << " ";
  }
  cout << "\n";

  srand(0);
  for (size_t i = 0; i < nMax; i++) {
    cout << rand() << " ";
  }
  cout << "\n\n";

  while (true) {
    cout << "������ ������������������, ���� ��������� �� ������� ������ :=)\n";
    srand(time(0));
    for (size_t i = 0; i < nMax; i++) {
      cout << rand() << " ";
    }
    cout << "\n��������� ������� � ������� ������� 'Enter' ('q' � 'Enter' - ��� ������)\n";
    char ch = getchar();
    if (ch == 'q' || ch == 'Q')
      break;
  }
}