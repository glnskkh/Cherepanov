#include <iostream>

using namespace std;

const int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int foundedNumbers[10];

void SelectNumbers(int x, int n = 1) {
  for (int i = 0; i < 10; ++i)
    if (numbers[i] == x)
      for (int j = 0; j < n && j + i < 10; ++j)
        foundedNumbers[j] = numbers[i + j];
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

  for (int found : foundedNumbers)
    cout << found << endl;

  SelectNumbers(2, 3);

  for (int found : foundedNumbers)
    cout << found << endl;

  SelectNumbers(9);

  for (int found : foundedNumbers)
    cout << found << endl;
}