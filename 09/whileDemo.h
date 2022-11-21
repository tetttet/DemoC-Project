#pragma once
#include <iostream>
//#include <numbers>
using namespace std;
//using namespace std::numbers;

void infinityDemo() {
	while (true) {
		cout << "Превед'\n";
		cout << "Медвед!'\n";
	}

}


void simpleDemo0() {
	int nMax = 10;
	
	int count = 1;
	while (count <= nMax) {
		cout << count << "  Hello\n";
		count++;
	}
	cout << "End\n";
}


void simpleDemo() {
	int nMin = 10;
	int nMax = 15;
	int count = nMax;

	while (count >= nMin) {
		cout << count << "  " << count*count << "\n";
		count--;
	}
}

void sumDemo() {
	int nMin = 10;
	int nMax = 15;

	int sum = 0;
	int cnt = nMin;
	while (cnt <= nMax) {
		sum = sum + cnt;
		//sum += cnt;
		cout << "cnt = " << cnt << ", sum = " << sum << "\n";
		cnt++;
	}
	cout << "sum = " << sum << "\n";
}



void multDemo() {
	int nMin = 10;
	int nMax = 15;
	int mult = 1;

	int cnt = nMin;
	while (cnt <= nMax) {
		mult = mult * cnt;
		cout << "cnt = " << cnt << ", mult = " << mult << "\n";
		cnt++;
	}
	cout << "mult = " << mult << "\n";
}


void temp() {
	int nMin = 10;
	int nMax = 25;
	int cnt = nMin;
	while (cnt <= nMax) {
		cout << cnt << " " << (cnt + 0.4) << "\n";
		cnt++;
	}
}

void whileDemo() {
	//infinityDemo();
	//simpleDemo0();
	//simpleDemo();
	//sumDemo();
	//multDemo();
	temp();
}