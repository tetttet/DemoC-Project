#include <iostream>
#include <iomanip>
using namespace std;


//Даны два прямоугольника, стороны которых параллельны или перпендикулярны осям координат.
// Известны координаты левого нижнего угла каждого из них и длины их сторон.
// Найти координаты левого нижнего и правого верхнего углов минимального прямоугольника, содержащего указанные прямоугольники.
void rectangle() {
  //b - bottom 
  //l = left
  //w - width
  //h - height
  //t - top
  //r - right
  double b1, l1, w1, h1, t1, r1, b2, l2, w2, h2, t2, r2;

  b1 = 1; l1 = 1; w1 = 10; h1 = 5;
  b2 = 2; l2 = 2; w2 = 5; h2 = 10;

  t1 = b1 + h1;
  r1 = l1 + w1;

  t2 = b2 + h2;
  r2 = l2 + w2;

  double bMin = (b1 < b2) ? b1 : b2;
  double lMin = (l1 < l2) ? l1 : l2;
  double tMax = (t1 < t2) ? t2 : t1;
  double rMax = (r1 < r2) ? r2 : r1;

  cout << "bMin   = " << bMin << "\n";
  cout << "lMin   = " << lMin << "\n";
  cout << "width  = " << rMax - lMin << "\n";
  cout << "height = " << tMax - bMin << "\n";
}




//Даны целое число k(1 <= k <= 180) и последовательность цифр 10111213...9899, в которой выписаны подряд все двузначные числа.
//Определить k - ю цифру.
void sequencee() {
  const int kMax = 40;
  int k, d;
  k = 1;
  while (k < kMax) {
    int num = (k + 1)/2 + 9;
    if (k % 2 == 0) {
      d = num % 10;
    } else {
      d = num / 10;
    }
    cout << "k = " << setw(3) << k << ", d = " << d << ", num = " << num << "\n";
    k++;
  }
}



int main() {
  setlocale(LC_ALL, "RUS");

  //rectangle();
  sequencee();

  cout << "\nEnd . . .\n";
  getchar();
}


