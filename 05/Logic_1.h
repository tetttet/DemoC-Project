#pragma once
#include <iostream>
using namespace std;

void case_1a() {
	double x, y;
	

	cout << "������� �������� x: \n";
  cin >> x;
  	
	cout << "������� �������� y: \n";
  cin >> y;


	if ((x < -2) && (y > 1)) {
		cout << "����� � �������� �������������� ���� \n";
	}	else {
		cout << "����� �� ������ � �������������� ���� \n";
	}
}

void case_1b() {
  double x, y;
  
  cout << "������� �������� x: \n";
  cin >> x;

  cout << "������� �������� y: \n";
  cin >> y;
  
  if (y <= 1.5 && y >= -2) {
    cout << "����� � �������� �������������� ���� \n";
  } else {
    cout << "����� �� ������ � �������������� ���� \n";
  }
}

void case_1c() {
  double x, y;

  cout << "������� �������� x: \n";
  cin >> x;

  cout << "������� �������� y: \n";
  cin >> y;

  if ((x >= 1 && x <= 2) && (y >= 1 && y <= 4)) {
    cout << "����� � �������� �������������� ���� \n";
  } else {
    cout << "����� �� ������ � �������������� ���� \n";
  }
}

void case_1d() {
  double x, y;

  cout << "������� �������� x: \n";
  cin >> x;

  cout << "������� �������� y: \n";
  cin >> y;

  if ((x >= 1) && (y >= 2 && y <= 4)) {
    cout << "����� � �������� �������������� ���� \n";
  } else {
    cout << "����� �� ������ � �������������� ���� \n";
  }
}

void Logic_1() {
	//case_1a();
  //case_1b();
  //case_1c();
  //case_1d();
}