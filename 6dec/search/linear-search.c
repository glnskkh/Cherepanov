#include <stdio.h>

/*
 *  WORST CASE: O(n)
 *  MEDIUM CASE: O(n/2)
 *  BEST CASE: O(1)
 * */
int linear(int *A, int n, int x) {
  while (n-- > 0)
    if (A[n] == x)
      break;

  return n;
}

int main(void) {
  int a[] = {1, 2, 3};

  int x;

  scanf("%d", &x);

  printf("%d\n", linear(a, 3, x));
}
