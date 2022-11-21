#include <iostream>
#include "randomsDemo.h"
#include "arrayDemo.h"
#include "searchDemo.h"
#include "transferDemo.h"
#include "sortDemo.h"
#include "sortBubble.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "RUS");

	//randomDemo();
	//arrayDemo();

	searchDemo();
	//transferDemo();

	//sortDemo();
  //sortBubbleDemo();

	cout << "\nEnd . . .\n";
	getchar();
}


