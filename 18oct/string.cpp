#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char string[] = "Hello";
  // "Hello" => {'H', ..., 'o', '\0'}

  cout << string << endl;
  cout << size(string) << endl;
  cout << sizeof(string) << endl;
  cout << strlen(string) << endl;
}