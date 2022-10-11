#include <iostream>

int main()
{
  int n = 1;
  int x = 0;

  while (n <= 10)
    x += n++;

  std::cout << x << std::endl;

  // Inf. loop
  // while (1); или while (true);

  // Write --x instead of x-- - its faster
}