#pragma once
#include <iostream>
#include <iomanip>
using namespace std;


void constDemo() {
  const double PI = 3.1415926;
  double const E = 2.718281828;

  double r = 10.0;
  double s = PI * r * r;

  cout << "r = " << r << "\n";
  cout << "s = " << s << "\n\n";
  
  cout << "e = " << E << "\n";
  cout << "e = " << setprecision(10) << E << "\n\n";
 
  cout << setprecision(10);
  cout << "PI = " << setw(20) << PI << ", e = "  << setw(20) << E << "\n\n";


 
}