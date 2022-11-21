#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
#include "utils.h"
using namespace std;


static void firstDemo() {
  const int nSize = 100;

  char helloPooh[] = "Hello, Pooh!";
  const char *helloCat = "Hello, Cat!";

  char helloBear[nSize] = "Hello, Bear!";

  //strlen - длина строки
  cout << helloPooh << "\n";
  cout << "strlen(helloPooh) = " << strlen(helloPooh) << "\n\n";

  cout << helloBear << "\n";
  cout << "strlen(helloBear) = " << strlen(helloBear) << "\n\n";


  //strcpy, strncpy - копирование строки
  strcpy(helloBear, helloCat);
  cout << "helloBear = " << helloBear << "\n";
  strncpy(helloBear, "qqqqqqqqqq", 4); //strncpy does not write a terminating null character
  cout << "helloBear = " << helloBear << "\n\n";


  //strcat, strncat - объединение строк
  char helloAll[nSize]{};
  strcat(helloAll, helloPooh);
  strcat(helloAll, " ");
  strcat(helloAll, helloCat);
  cout << "helloAll  = " << helloAll << "\n";
  strncat(helloAll, "qqqqqqqqqq", 4);
  cout << "helloAll  = " << helloAll << "\n\n";
}



static void compareDemo() {
  //strcmp, strncmp
  const char *s1 = "Happy New Year";
  const char *s2 = "Happy New Year";
  const char *s3 = "Happy Holidays";
  cout << "s1 = " << s1 << "\n";
  cout << "s2 = " << s2 << "\n";
  cout << "s3 = " << s3 << "\n";
  cout << "strcmp(s1, s2) = " <<  strcmp(s1, s2) << "\n";
  cout << "strcmp(s1, s3) = " <<  strcmp(s1, s3) << "\n";
  cout << "strcmp(s3, s1) = " <<  strcmp(s3, s1) << "\n\n";

  cout << "strncmp(s1, s3, 6) = " << strncmp(s1, s3, 6) << "\n";
  cout << "strncmp(s1, s3, 7) = " << strncmp(s1, s3, 7) << "\n";
  cout << "strncmp(s3, s1, 7) = " << strncmp(s3, s1, 7) << "\n";
}



static void searchCharDemo() {
  char helloPooh[] = "Hello, Pooh!";

  //strchr - поиск символа в строке
  cout << helloPooh << "\n";
  char *pos = strchr(helloPooh, 'P');
  cout << "pos = " << pos << ", *pos = " << *pos << "\n";

  pos = strchr(helloPooh, 'p');
  if (pos != NULL) {
    cout << "pos = " << pos << ", *pos = " << *pos << "\n\n";
  } else {
    cout << "pos = NULL\n\n";
  }

  pos = strchr(helloPooh, 'o');
  while (pos != NULL) {
    cout << *pos << ' ';
    pos = strchr(pos+1, 'o');
  }
  cout << "\n\n";


  //strrchr - поиск последнего встречающегос€ символа в строке
  pos = strrchr(helloPooh, 'o');
  if (pos != NULL) {
    cout << "pos = " << pos << ", *pos = " << *pos << "\n\n";
  }
}



static void searchStringDemo() {
  char helloPooh[] = "Hello, Pooh!";

  //strstr - поиск подстроки в строке
  char *p = strstr(helloPooh, "ll");
  cout << "p = " << p << ", *p = " << *p << "\n\n";

}



static void splitStringDemo() {
  //strtok - разбивает строку на подстроки

  char input[] = "Bear cat piglet came down the walk";
  char *token = strtok(input, " ");
  while (token) {
    cout << token << "\n";

    //uncomment!
    //printChars(input, 50);
    //cout << "\n";

    token = strtok(NULL, " ");
  }
  cout << "\n\n";

  char input2[] = "Hello\tBear\tand\tall,\tall,\tall!";
  token = strtok(input2, "\t");
  while (token) {
    puts(token);
    token = strtok(NULL, "\t");
  }
}



void stringFunctionsDemo() {
  //firstDemo();
  //compareDemo();
  //searchCharDemo();
  //searchStringDemo();
  splitStringDemo();
}