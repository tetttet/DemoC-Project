#pragma once
#include <iostream>
#include "utils.h"
using namespace std;

//https://www.geeksforgeeks.org/binary-search/
void binarySearchDemo() {
  const int nSize = 10;
  int arr[nSize]{90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
  printIntArr(arr, nSize);
  sort(arr, arr + nSize);
  printIntArr(arr, nSize);

  int toFind = 70;

  int l = 0; //left
  int r = nSize - 1; //right
  int idx = -1;
  bool result = false;
  while (l <= r) {
    idx = l + (r - l) / 2;
    //�� �� �����, ������ ���� :=)
    //idx = (r + l) / 2;

    // ��������, �� ������� �� ��� ����� ������� idx
    if (arr[idx] == toFind) {
      result = true;
      break;
    }
    
    if (arr[idx] < toFind)  //���� toFind ������, �� ���������� ����� ��������
      l = idx + 1;
    else                    //���� toFind ������, �� ���������� ������ ��������
      r = idx - 1;
  }

  if (result)
    cout << toFind << " �������, idx = " << idx << "\n";
  else
    cout << toFind << " �� �������!\n";
}