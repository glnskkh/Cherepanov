#include <iostream>

using namespace std;

int main()
{
  // Example
  // int arr[3]; - array with len 3

  // int a[3] = {0}; // All elements are zeroes
  // int b[3] = {1,
  //             2,
  //             3};
  // int c[3]{1, 2, 4};
  // int d[] = {12, 24};

  // Compile-time alloc mem for stack(!)
  // Stack: fast but sized

  // constexpr - вычисляются во время компиляции

  // typedef int[3] V3;

  const int N = 3;
  int arr[N];

  // int len = sizeof(arr) / sizeof(arr[0]); // or size(arr)

  for (int i = 0; i < size(arr); ++i)
    arr[i] = i;

  for (int el : arr)
    cout << el << endl;
}