#include <iostream>
#include <memory.h>

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

  // const int N = 3;
  // int arr[N];

  // int len = sizeof(arr) / sizeof(arr[0]); // or size(arr)

  // int i = 0;
  // for (int &el : arr)
  //   el = i++;

  // for (const auto el : arr)
  //   cout << el << endl;

  int arr1[2] = {1, 2};
  int arr2[2];

  memcpy(arr2, arr1, sizeof(arr1));

  for (const auto el : arr2)
    cout << el << endl;
}