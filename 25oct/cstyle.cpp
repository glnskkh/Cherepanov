#include <fstream>
#include <iostream>

using namespace std;

int main() {
  const char filename[] = "numbers.txt";

  FILE *file = fopen(filename, "r");

  if (file == NULL) {
    cerr << "Error reading file";
    return -1;
  }

  int a[4];
  for (int i = 0; i < 10; i++) {
    fscanf(file, "%d", a + i);
  }

  for (const auto el : a) {
    cout << el << endl;
  }

  fclose(file);
}