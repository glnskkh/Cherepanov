#include <stdio.h>
#include <stdbool.h>

/*
 * TODO
 * WORST O(logn)
 * BEST O(1)
 * AVG O(logn)
 * Я могу лучше!
 * */
int binary(int *A, int n, int x, int right, int left) {
  if (left > right)
    return -1;

  int mid = left + (right - left) / 2;

  if (x == A[mid])
    return mid;

  if (x < A[mid])
    return binary(A, n, x, right, mid + 1);

  return binary(A, n, x, mid - 1, left);
}

int search(int *A, int n, int x) {
  return binary(A, n, x, 0, n);
}

int main(void) {
  int a[] = {1, 2, 3};

  int x;

  scanf("%d", &x);

  printf("%d\n", search(a, 3, x));
}
