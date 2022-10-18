#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char s1[10] = "121c";
  char s2[5] = "123a";

  cout << strncat(s1, s2, strlen(s2)) << endl;
}