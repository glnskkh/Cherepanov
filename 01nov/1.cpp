#include <iostream>

using namespace std;

#define LEN 10

const int numbers[LEN] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int foundedNumbers[LEN];

void SelectNumbers(int x, int n = 1) {
  for (int i = 0; i < LEN; ++i)
    foundedNumbers[i] = 0;

  for (int i = 0; i < LEN; ++i)
    if (numbers[i] == x)
      for (int j = 0; j < n && j + i < LEN; ++j)
        foundedNumbers[j] = numbers[i + j];
}

void PrintNumbers(int numbers[LEN]) {
  for (int i = 0; i < LEN; ++i)
    cout << numbers[i] << endl;
}

bool Contains(int x) {
  for (int number : numbers)
    if (x == number)
      return true;

  return false;
}

int Square(int x) { return x * x; }

int main() {
  SelectNumbers(1, 2);
  PrintNumbers(foundedNumbers);

  SelectNumbers(2, 3);
  PrintNumbers(foundedNumbers);

  SelectNumbers(9);
  PrintNumbers(foundedNumbers);
}