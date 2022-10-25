#include <iostream>
#include <memory.h>

using namespace std;

int main()
{
  int a[2][2] = {
      {1, 2},
      {3, 4}}; // Двумерные (не массивы массивов!)

  int bytes = sizeof(a);
  int lin = sizeof(a) / sizeof(a[0][0]);
  int fLen = sizeof(a) / sizeof(a[0]);
  int sLen = sizeof(a[0]) / sizeof(a[0][0]);

  // Copy:
  int b[6];

  memcpy(b, a, sizeof(a));

  // Otherwize:
  // *(a+1), *(a+2), etc.

  int arr[3] = {1, 3, 2};
  int x = 3;
  int i = 0;

  while (i < size(arr) && arr[i] != x)
    i++;
q
  cout << i << endl;
}