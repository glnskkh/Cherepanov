#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double d1(10 - 9.99);
  double d2(100 - 99.99);

  cout << fixed << setprecision(20);

  cout << d1 << endl;
  cout << d2 << endl;

  // bool bFlag = abs(d1 - d2) <;
  // < epsilon * scaleFactor (max(1.0, |d1|, |d2|))

  // Прочти про scaleFactor при сравнении
}