#include <iostream>
#include <iomanip>
using namespace std;

static size_t strlenStep(const char *str) {
  size_t result = 0;
  const char *p = str;
  while (*p++ != 0) {
    ++result;
  }
  //or:
  //for (; *p != 0; ++p, ++result)
  //  ;
  return result;
}



static bool isDigit(const char ch) {
  return (ch >= 48 && ch <= 57);
}


void ordinaryActionsDemo() {
  char str[]{"0123456789"};
  cout << str << "\n";
  cout << "len = " << strlenStep(str) << "\n";

  //print by letters
  char *p = str;
  while (*p != 0) {
    cout << *p << " ";
    ++p;
  }
  cout << "\n";

  //reverse print

  //p = str;
  //while (*p++ != 0)
  //  ;
  //--p;
  
  //or:
  for (p = str; *p != 0; ++p)
    ;

  while (p-- != str) {
    cout << *p << " ";
  }
  cout << "\n";


  //select from idx1 to idx2
  size_t idx1 = 2, idx2 = 5;
  char *temp = new char[idx2 - idx1 + 1]{};

  for (size_t i = idx1, idxCurr = 0;  i != idx2;  i++, idxCurr++) {
    temp[idxCurr] = str[i];
  }
  cout << temp << "\n";
  delete[] temp;


  //digits count
  size_t digCount = 0;
  for (char *p = str; *p != 0; ++p) {
    if(isDigit(*p))
      ++digCount;
  }
  cout << "digits count = " << digCount << "\n";
}