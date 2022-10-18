#include <iostream>

using namespace std;

int main()
{
  string s1 = "123";

  int a = stoi(s1);
  double b = stod(s1);

  cout << a + 2 << endl;
  cout << b / 2 << endl;
}