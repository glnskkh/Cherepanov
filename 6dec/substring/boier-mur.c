/*
 * Под несошедшимся символом - другой символ на следующей итерации
 *
 * 1. Считаем с конца
 * 2. Плохой символ
 *  d a t t a *
 *  4 3 1 1 3 5
 *
 * 2. Крайняя позиция хорошего суффикса
 * */

#include <stdio.h>
#include <string.h>

int boiermur(char *S, char *T) {
  int n = strlen(S), m = strlen(T);

  int index[m];
  char lastChar = T[m - 1];
  int lastDistance = -1;

  for (int i = 0; i < m - 1; ++i) {
    int length = m - i - 1;

    index[i] = length; 

    if (T[i] == lastChar)
      lastDistance = length;
  }

  index[m - 1] = lastDistance == -1 ? m : lastDistance;

  for (int i = m - 1; i < n;) {
    int j = 0;

    for (; j < m; ++j) {
      if (T[m - 1 - j] != S[i - j]) {
        i += index[m - 1 - j];
        break;
      }
    }

    if (j == m) {
      return i - (m - 1);
    } else {
      ++i;
    }
  }
}
