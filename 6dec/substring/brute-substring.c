#include <stdio.h>
#include <string.h>

int brute(char *S, char *T) {
  int n = strlen(S);
  int m = strlen(T);

  for (int i = 0; i <= n - m; ++i) {
    int j = 0;

    while (j < m && S[i + j] == T[j])
      ++j;

    if (j == m)
      return i;
  }

  return -1;
}

int main(void) {
  char S[100], T[100];

  // char *s = S;
  // while ((s - S) < 100 && (*(s++) = getchar()) != EOF);

  scanf("%s", S);
  scanf("%s", T);

  printf("%d", brute(S, T));
}
