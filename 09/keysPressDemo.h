#pragma once
#include <iostream>
#include <windows.h>	//Beep, Sleep
#include <conio.h>		//kbhit, getch
using namespace std;

void getchDemo() {
  const int ESC = 27;
  int key;
  while (true) {
    cout << "Press any key ('Esc' for exit)\n";
    key = _getch();
    cout << (char)key << " " << key << "\n";
    if (key == ESC) {
      Beep(1480, 200);
      break;
    }
  }
}


void test2() {
  const int ESC = 27;
  int key;
  while (true) {
    if (_kbhit()) {    // Нажата клавиша?
      key = _getch();
      cout << key << " ";
      if (key == ESC) {
        return;
        //or:
        //break;6
      }
    } else {
      Sleep(1);
    }
  }
}



void keysPressDemo() {
  getchDemo();
  //test3();
}