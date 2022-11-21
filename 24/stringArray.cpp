#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
#include "utils.h"
using namespace std;

static void staticArrayDemo() {
  const int nSize = 10;
  char word0[] = "Preved";
  char word1[] = "medved";
  char word2[] = "Pooh";
  char word3[] = "!";
  char *arrStatic[nSize]{word0, word1, word2, word3};
  //or:
  const char *arrStatic2[nSize]{"Preved", "medved", "Pooh", "!"};


  for (size_t i = 0; i < nSize; i++) {
    if (arrStatic[i] != nullptr) {
      cout << arrStatic[i] << " ";
    }
  }
  cout << "\n";
  for (size_t i = 0; i < nSize; i++) {
    if (arrStatic2[i] != nullptr) {
      cout << arrStatic2[i] << " ";
    }
  }
  cout << "\n";
}



static void dynamicArrayDemo() {
  int nSize = 1'000'000;
  char **arr = new char *[nSize] {};
  char word0[] = "Hello";
  char word1[] = "Bear Pooh";
  char word2[] = "and";
  char word3[] = "all, all, all!";

  //имитация заполнения из любого источника данных,
  //например, в цикле из СУБД или TCP/IP сокета
  arr[0] = new char[strlen(word0) + 1];
  strcpy(arr[0], word0);
  arr[1] = new char[strlen(word1) + 1];
  strcpy(arr[1], word1);
  arr[2] = new char[strlen(word2) + 1];
  strcpy(arr[2], word2);
  arr[3] = new char[strlen(word3) + 1];
  strcpy(arr[3], word3);

  for (size_t i = 0; i < nSize; i++) {
    if (arr[i] != nullptr) {
      cout << arr[i] << " ";
    }
  }

  for (size_t i = 0; i < nSize; i++) {
    delete[] arr[i];
  }
  delete[] arr;
}


//char** getStringArray() {
//
//
//}

void stringArrayDemo() {
  //staticArrayDemo();
  dynamicArrayDemo();

}