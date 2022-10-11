#include <iostream>

using namespace std;

int main()
{
  int a, b;
  char op;

  do
  {
    cin >> a >> op >> b;

    switch (op)
    {
    case '+':
      cout << a + b << endl;
      break;

    default:
      break;
    }

    cout << "continue? (y/n) ";
    cin >> op;
  } while (op == 'y');
}