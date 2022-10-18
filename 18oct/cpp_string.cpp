#include <iostream>

using namespace std;

int main()
{
  string s1 = "123";

  cout << s1 << endl;
  cout << sizeof(string) << endl;
  cout << sizeof(s1) << endl;
  cout << s1.length() << endl;
  cout << s1.capacity() << endl;
  cout << s1.c_str() << endl;
}