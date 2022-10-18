#include <iostream>

using namespace std;

int main()
{
  string s1 = "123";

  cout << s1 << endl;
  cout << s1.length() << endl;
  cout << s1.capacity() << endl;

  s1 += "11111111111111";

  cout << s1 << endl;
  cout << s1.length() << endl;
  cout << s1.capacity() << endl;

  const char *p = s1.data();

  cout << p << endl;
}