#include <stdio.h>
#include <stdbool.h>

/*
 *  Идея: бинарный поиск, но мы можем предпологать, где примерно у нас находится элемент и таким образом оптимизировать поиск.
 *  Интекполяционный поиск
 * */

/*
 * TODO
 * WORST O(loglogn)
 * BEST O(1)
 * AVG O(loglogn)
 * */
int binary(int *A, int n, int x) {
  int mid, right = 0, left = n;
  double factor;

  while (right <= left) {
    factor = (x - A[left]) / (A[right] - A[left]);
    mid = left + (right - left) * factor;

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
