#include <Windows.h> //!!! before 'using namespace std' to avoid 'std::byte ambiguous symbol' from keysPressDemo.h

#include <iostream>
#include "operatorsDemo.h"
#include "whileDemo.h"
#include "forDemo.h"
#include "breakContinueDemo.h"
#include "iomanipDemo.h"
#include "nestedCyclesDemo.h"
#include "doWhileDemo.h"
#include "randomDemo.h"
#include "keysPressDemo.h"
#include "myOwnSnippet.h"
#include "threeValueDigit.h"
using namespace std;


int main() {

	setlocale(LC_ALL, "RUS");

	//operatorsDemo();
	//whileDemo();
	//forDemo();
	//breakContinueDemo();
	//iomanipDemo();
	//nestedCyclesDemo();
  //doWhileDemo();
	//randomDemo();
	//keysPressDemo();
  //myOwnSnippet();
  threeValueDigit();


	cout << "\nEnd . . .";
	getchar();
}


