#include <stdio.h>
#include <stdbool.h>

/*
 * TODO
 * WORST O(logn)
 * BEST O(1)
 * AVG O(logn)
 * */
int binary(int *A, int n, int x) {
  int mid, right = 0, left = n;

  while (right <= left) {
    mid = left + (right - left) / 2;

    if (x == A[mid])
      return mid;

    if (x < A[mid])
      right = mid - 1;

    if (x > A[mid])
      left = mid + 1;
  }

  return -1;
}

int main(void) {
  int a[] = {1, 2, 3};

  int x;

  scanf("%d", &x);

  printf("%d\n", binary(a, 3, x));
}
