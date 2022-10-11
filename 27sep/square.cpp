#include <iostream>
#include <cmath>

int main()
{
  float a, b, c, x1, x2;

  std::cin >> a >> b >> c;

  if (a == 0)
  {
    if (b != 0)
      std::cout << -c / b << std::endl;
    else if (c == 0)
      std::cout << "any real" << std::endl;
    else
      std::cout << "none real" << std::endl;

    return;
  }

  float D = pow(b, 2) - 4 * a * c;

  if (D < 0)
    std::cout << "none real" << std::endl;
  else
  {
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);

    std::cout << x1 << " " << x2 << std::endl;
  }
}