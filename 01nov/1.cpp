#include <iostream>

using namespace std;

const int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int foundedNumbers[10];

void SelectNumbers(int i) {
  static int start = 0;

  foundedNumbers[start++] = numbers[i];

  start %= 10;
}

bool Contains(int x) {
  for (int number : numbers)
    if (x == number)
      return true;

  return false;
}

int Square(int x) { return x * x; }

int main() {
  SelectNumbers(1);
  SelectNumbers(2);
  SelectNumbers(9);

  for (int found : foundedNumbers)
    cout << found << endl;
}