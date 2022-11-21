#include <iostream>
using namespace std;

void mathDemo() {

	int i = 123;
	int j = 10;
	cout << "i / j = " << i / j << "\n";
	cout << "i % j = " << i % j << "\n";

	double x = 123;
	double y = 10;
	cout << "x / y = " << x / y << "\n";


	double a, b;
	cout << "Enter a:\n";
	cin >> a;
	cout << "Enter b:\n";
	cin >> b;

	double c = a * b;
	cout << "c = " << c << "\n";
}

//Условие решаемой задачи!!!
//
void bilet() {
	int x, y;
	int d1, d2, d3, d4, d5, d6;
	//cout << "Enter 6-digit number:\n";
	//cin >> x;
	//cout << "Entered x = " << x << "\n";
	x = 123456;
  cout << "Entered x = " << x << "\n";

	d6 = x % 10;
	cout << "d6 = " << d6 << "\n";

	d5 = (x / 10) % 10;
	cout << "d5 = " << d5 << "\n";

	d4 = (x / 100) % 10;
	cout << "d4 = " << d4 << "\n";

	d3 = (x / 1000) % 10;
	cout << "d3 = " << d3 << "\n";

	d2 = (x / 10000) % 10;
	cout << "d2 = " << d2 << "\n";

	d1 = (x / 100000) % 10;
	cout << "d1 = " << d1 << "\n";

	y = d6 * 100'000 + d5 * 10'000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
	cout << "y = " << y << "\n";
}


int main() {
	setlocale(LC_ALL, "RUS");

	//mathDemo();
	bilet();


	cout << "\nEnd . . .\n";
	getchar();
	getchar();
}


