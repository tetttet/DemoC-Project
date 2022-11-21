#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

void printIntArr(int arr[], int nSize) {
	for (size_t i = 0; i < nSize; i++) {
		cout << setw(5) << arr[i];
	}
	cout << '\n';
}


