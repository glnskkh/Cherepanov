#include <iostream>

using namespace std;

void Swap(int *x, int *y) {
  int t = *x;
  *x = *y;
  *y = t;
}

void Swap2(int &x, int &y) {
  int t = x;
  x = y, y = t;
}

double Average(int n, ...) {
  double sum = 0;

  va_list list;
  va_start(list, n);

  for (int i = 0; i < n; ++i)
    sum += va_arg(list, double); // Get bytes in order

  va_end(list);

  return sum / n;
}

int main() {
  cout << Average(3, 1.0, 2.0, 3.0) << endl;

  int a = 12, b = 21;

  Swap2(a, b);

  cout << a << ' ' << b << endl;

  int value = 3;
  int &refValue = value;

  refValue = 4;
  // There value == 4

  int intVal1 = 3, intVal2 = 4;

  int &ref = intVal1;

  ref = intVal2; // Ссылки переназначаются!
  ref++;
  cout << intVal2;

  const int a = 1;
  const int &r = a; // не int &r = a;

  // Проверить глубину копирования на Swap(string &a, string &b);
}