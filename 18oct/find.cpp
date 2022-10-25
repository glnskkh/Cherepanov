#include <iostream>

using namespace std;

int find(char *s1, char *s2)
{
  char *p1 = s1;
  char *p2 = s2;

  while (*p1)
  {
    if (*p1 == *p2)
      p2++;
    else
    {
      if (!(*p2))
        return (p1 - s1) - (p2 - s2);
      else
        p2 = s2;
    }

    p1++;
  }

  if (!(*p2))
    return (p1 - s1) - (p2 - s2);

  return -1;
}

int main()
{
  char *s1 = "Hello";
  char *s2 = "ello";

  cout << find(s1, s2) << endl;
}